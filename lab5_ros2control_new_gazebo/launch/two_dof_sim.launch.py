from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    pkg_two_dof = get_package_share_directory('lab5_ros2control_new_gazebo')

    # 1) robot_state_publisher con xacro (ya definido en rsp.launch.py)
    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_two_dof, 'launch', 'rsp.launch.py')),
        launch_arguments={
            'use_sim_time': 'true',
            'use_ros2_control': 'true'
        }.items())

    # 2) Ignition Gazebo en modo headless + GUI (‑r = run, -v4 = verbose)
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('ros_gz_sim'),
                'launch', 'gz_sim.launch.py')),
        launch_arguments={'gz_args': '-r -v 4 empty.sdf'}.items())

    # 3) Spawner: lee /robot_description (URDF) y crea la entidad en Ignition
    spawn = Node(package='ros_gz_sim',
                 executable='create',
                 arguments=['-topic', 'robot_description',
                            '-name', 'two_dof'],
                 output='screen')

    # 4) Puente ROS 2 ↔ Ignition (clock + joint states)
    bridge = Node(package='ros_gz_bridge',
                  executable='parameter_bridge',
                  arguments=[
                      # tiempo simulado
                      '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
                      # estados articulares publicados por ros2_control en Ignition
                      '/world/default/model/two_dof/joint_state'
                      '@sensor_msgs/msg/JointState[gz.msgs.Model'
                  ],
                  output='screen')

    # 5) Spawners de controladores (idénticos al original)
    js_broadcaster = Node(package='controller_manager',
                          executable='spawner',
                          arguments=['joint_state_broadcaster'],
                          output='screen')

    jt_controller = TimerAction(
        period=2.0,
        actions=[Node(package='controller_manager',
                      executable='spawner',
                      arguments=['joint_trajectory_controller'],
                      output='screen')])

    return LaunchDescription([
        rsp,
        gz_sim,
        spawn,
        bridge,
        js_broadcaster,
        jt_controller
    ])
