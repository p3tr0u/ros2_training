#include <memory>
#include <thread>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "motor_action/action/move.hpp"

using Move = motor_action::action::Move;
using GoalHandleMove = rclcpp_action::ServerGoalHandle<Move>;

class MotorHandler : public rclcpp::Node
{
public:
    MotorHandler() : Node("motor_handler")
    {
        action_server_ = rclcpp_action::create_server<Move>(this, "move",
            std::bind(&MotorHandler::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MotorHandler::handle_cancel, this, std::placeholders::_1),
            std::bind(&MotorHandler::handle_accepted, this, std::placeholders::_1));
    }

private:
    rclcpp_action::Server<Move>::SharedPtr action_server_;
    rclcpp_action::GoalResponse handle_goal(
            const rclcpp_action::GoalUUID & uuid,
            std::shared_ptr<const Move::Goal> goal)
        {
            RCLCPP_INFO(this->get_logger(), "Received goal with %zu angles", goal->angles.size());
            (void)uuid;
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }

    rclcpp_action::CancelResponse handle_cancel(
            const std::shared_ptr<GoalHandleMove> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Received cancel request");
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }

    void handle_accepted(const std::shared_ptr<GoalHandleMove> goal_handle)
        {
            std::thread{std::bind(&MotorHandler::execute, this, std::placeholders::_1), goal_handle}.detach();
        }

    void execute(const std::shared_ptr<GoalHandleMove> goal_handle)
        {
            auto goal = goal_handle->get_goal();
            auto result = std::make_shared<Move::Result>();

            if(goal->angles == std::vector<int>{15, 20, 10}){
                RCLCPP_INFO(this->get_logger(), "Moving forward.");
            }
            else if(goal->angles == std::vector<int>{-10, -20, -15}){
                RCLCPP_INFO(this->get_logger(), "Moving backwards.");
            }
            std::this_thread::sleep_for(std::chrono::seconds(1));

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
