import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class SuscriptorSimple(Node):
    def __init__(self):
        super().__init__("simple_subscriber")
        self.get_logger().warning("Inicio de Nodo Suscriptor")

        self.number_sub_ = self.create_subscription(
            Int32, 
            "/counter", 
            self.subscriber_callback, 
            10)

    def subscriber_callback(self, msg:Int32):
        self.get_logger().info(str(msg))

def main(args=None):
    rclpy.init(args=args)
    node = SuscriptorSimple()

    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
