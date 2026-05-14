import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Controller(Node):
    def __init__(self):
        super().__init__('controller')
        self.publisher = self.create_publisher(String, 'controls', 10)

    def send_input(self):
        while rclpy.ok():
            user_in = input('Enter command (1=forward, 2=backward): ')
            msg = String()
            if user_in == '1':
                msg.data = "MOVE_FORWARD"
                self.publisher.publish(msg)
            elif user_in == '2':
                msg.data = "MOVE_BACKWARDS"
                self.publisher.publish(msg)
            else:
                self.get_logger().warn('Invalid input, ignoring.')

def main(args=None):
    rclpy.init(args=args)
    node = Controller()
    node.send_input()
    node.destroy_node()
    rclpy.shutdown()
