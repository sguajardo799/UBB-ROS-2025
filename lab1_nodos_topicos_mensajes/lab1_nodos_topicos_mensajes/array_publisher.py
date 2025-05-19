import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from rclpy.executors import ExternalShutdownException

class PublicadorArray(Node):
    def __init__(self):
        super().__init__("publicador_array")
        self.get_logger().info("Inicio de publicador array")

        self.array_pub = self.create_publisher(Float64MultiArray, "/sensor/array", 10)
        self.create_timer(1.0, self.publish_callback)

    def publish_callback(self):
        msg = Float64MultiArray()
        msg.data = [0.1, 0.5, 0.9]

        self.array_pub.publish(msg)
    
def main(args=None):
    try:
        with rclpy.init(args=args):
            pub_array = PublicadorArray()
            rclpy.spin(pub_array)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass

if __name__ == "__main__":
    main()
