import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.executors import ExternalShutdownException

class SuscriptorTwist(Node):
    def __init__(self):
        super().__init__("subscriptor_twist")
        self.get_logger().warning("Inicio de Nodo Suscriptor Twist")

        self.number_sub_ = self.create_subscription(
            Twist, 
            "/cmd_vel", 
            self.subscriber_callback, 
            10)

    def subscriber_callback(self, msg:Twist):
        self.get_logger().info(f"Linear:\n x:{msg.linear.x}, y:{msg.linear.y}, z:{msg.linear.z} \nAngular \nx:{msg.angular.x}, y:{msg.angular.y}, z:{msg.angular.z}\n")

def main(args=None):
    try:
        with rclpy.init(args=args):
            node = SuscriptorTwist()
            rclpy.spin(node)
    except (KeyboardInterrupt,ExternalShutdownException):
        pass

if __name__ == "__main__":
    main()
