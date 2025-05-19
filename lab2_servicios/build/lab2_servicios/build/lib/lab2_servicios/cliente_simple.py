import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException

from example_interfaces.srv import AddTwoInts

class ClienteSimple(Node):
    def __init__(self):
        super().__init__("ServidorSimple")
        self.cli = self.create_client(AddTwoInts, "add_two_ints")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("servicio no disponible, esperando ...")

        self.req = AddTwoInts.Request()

    def send_request(self):
        self.req.a = 3
        self.req.b = 5
        return self.cli.call_async(self.req)

def main():
    try:
        with rclpy.init():
            cliente_simple = ClienteSimple()
            future = cliente_simple.send_request()
            rclpy.spin_until_future_complete(cliente_simple, future)
            response = future.result()
            cliente_simple.get_logger().info(
                    f"Resultado de suma: {cliente_simple.req.a} + {cliente_simple.req.b} = {response.sum}"
                    )
    except (KeyboardInterrupt, ExternalShutdownException):
        pass

if __name__ == "__main__":
    main()
