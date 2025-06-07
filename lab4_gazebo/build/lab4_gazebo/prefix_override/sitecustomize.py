import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sguajardo/UBB-ROS-2025/lab4_gazebo/install/lab4_gazebo'
