import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from sensor_msgs.msg import Imu
from rclpy.executors import ExternalShutdownException

class PublicadorImu(Node):
    def __init__(self):
        super().__init__("publicador_imu")
        self.get_logger().info("Inicio de publicador datos de Imu")

        self.imu_pub = self.create_publisher(Imu, "/imu/data", 10)
        self.create_timer(0.1, self.imu_callback)

    def imu_callback(self):
        msg = Imu()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "imu_link"
        
        msg.linear_acceleration.x = 0.0
        msg.linear_acceleration.y = 0.0
        msg.linear_acceleration.z = -9.8

        msg.angular_velocity.x = 0.0
        msg.angular_velocity.y = 0.0
        msg.angular_velocity.z = 0.1

        self.imu_pub.publish(msg)

def main(args=None):
    try:
        rclpy.init()
        pub_imu = PublicadorImu()
        rclpy.spin(pub_imu)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass

if __name__ == "__main__":
    main()
