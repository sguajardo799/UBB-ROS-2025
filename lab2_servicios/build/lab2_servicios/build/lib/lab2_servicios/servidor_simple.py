import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException

from example_interfaces.srv import AddTwoInts

class ServidorSimple(Node):
    def __init__(self):
        super().__init__("ServidorSimple")
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.add_two_ints_callback)

    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f"Peticion Entrante \na: {request.a} b: {request.b}")

        return response

def main():
    try:
        with rclpy.init():
            servidor_simple = ServidorSimple()
            rclpy.spin(servidor_simple)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass

if __name__ == "__main__":
    main()
