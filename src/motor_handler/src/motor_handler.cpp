#include <memory>
#include <thread>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "motor_action/action/rotate.hpp"

using Rotate = motor_action::action::Rotate;
using GoalHandleRotate = rclcpp_action::ServerGoalHandle<Rotate>;

class MotorHandler : public rclcpp::Node
{
public:
    MotorHandler() : Node("motor_handler")
    {
        action_server_ = rclcpp_action::create_server<Rotate>(
            this,
            "rotate",
            std::bind(&MotorHandler::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MotorHandler::handle_cancel, this, std::placeholders::_1),
            std::bind(&MotorHandler::handle_accepted, this, std::placeholders::_1));
    }

private:
    rclcpp_action::Server<Rotate>::SharedPtr action_server_;

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const Rotate::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received goal with %zu angles", goal->angles.size());
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleRotate> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Received cancel request");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleRotate> goal_handle)
    {
        std::thread{std::bind(&MotorHandler::execute, this, std::placeholders::_1), goal_handle}.detach();
    }

    void execute(const std::shared_ptr<GoalHandleRotate> goal_handle)
    {
        auto goal = goal_handle->get_goal();
        auto result = std::make_shared<Rotate::Result>();

        for (auto angle : goal->angles)
        {
            RCLCPP_INFO(this->get_logger(), "Rotating motor by %d degrees", angle);
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        result->success = true;
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "Movement complete");
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MotorHandler>());
    rclcpp::shutdown();
    return 0;
}
