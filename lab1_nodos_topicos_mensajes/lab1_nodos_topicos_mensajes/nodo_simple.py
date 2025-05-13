import rclpy
from rclpy.node import Node

class NodoSimple(Node):
    def __init__(self):
        super().__init__("nodo_simple")
        self.get_logger().info("Inicio de nodo simple")
    
def main(args=None):
    rclpy.init(args=args)
    nodo_simple = NodoSimple()

    rclpy.spin(nodo_simple)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

