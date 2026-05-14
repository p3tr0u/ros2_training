#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class InputHandler : public rclcpp::Node
{
public:
    InputHandler() : Node("input_handler")
    {
        subscription_ = this->create_subscription <
                        std_msgs::msg::String > ("controls", 10,
                        std::bind(&InputHandler::controls_callback,
                        this, std::placeholders::_1));
    }

private:
    void controls_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<InputHandler>());
    rclcpp::shutdown();
    return 0;
}
