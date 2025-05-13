import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sguajardo/Curso_ROS2_2025/lab1_nodos_topicos_mensajes/install/lab1_nodos_topicos_mensajes'
