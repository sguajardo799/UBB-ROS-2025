import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class PublicadorSimple(Node):
    def __init__(self, counter:int = 0):
        super().__init__("publicador_simple")
        self.get_logger().info("Inicio de publicador simple")
        self.counter = counter

        self.counter_pub = self.create_publisher(Int32, "/counter", 10)
        self.create_timer(2, self.counter_callback)

    def counter_callback(self):
        self.get_logger().info(f"Contador: {self.counter}")

        msg = Int32()
        msg.data = self.counter

        self.counter_pub.publish(msg)

        self.counter += 1
    
def main(args=None):
    rclpy.init(args=args)
    pub_simple = PublicadorSimple(counter = 0)

    rclpy.spin(pub_simple)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
