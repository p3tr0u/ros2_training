#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/string.hpp"
#include "motor_action/action/move.hpp"

using Move = motor_action::action::Move;

class InputHandler : public rclcpp::Node
{
public:
    InputHandler() : Node("input_handler")
    {
        action_client_ = rclcpp_action::create_client<Move>(this, "move");

        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "controls", 10,
            std::bind(&InputHandler::controls_callback, this, std::placeholders::_1));

        is_moving_ = false;
    }

private:
    rclcpp_action::Client<Move>::SharedPtr action_client_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    bool is_moving_;

    void controls_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        if (is_moving_)
        {
            RCLCPP_WARN(this->get_logger(), "Movement in progress, ignoring input.");
            return;
        }

        auto goal = Move::Goal();

        if (msg->data == "MOVE_FORWARD")
        {
            goal.angles = {15, 20, 10};
        }
        else if (msg->data == "MOVE_BACKWARDS")
        {
            goal.angles = {-10, -20, -15};
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "Unknown command, ignoring.");
            return;
        }

        is_moving_ = true;
        RCLCPP_INFO(this->get_logger(), "Sending goal to motor_handler.");

        auto send_goal_options = rclcpp_action::Client<Move>::SendGoalOptions();
        send_goal_options.result_callback =
            [this](const rclcpp_action::ClientGoalHandle<Move>::WrappedResult & result) {
                if (result.result->success)
                {
                    RCLCPP_INFO(this->get_logger(), "Movement succeeded.");
                }
                else
                {
                    RCLCPP_ERROR(this->get_logger(), "Movement failed.");
                }
                is_moving_ = false;
            };

        action_client_->async_send_goal(goal, send_goal_options);
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<InputHandler>());
    rclcpp::shutdown();
    return 0;
}
