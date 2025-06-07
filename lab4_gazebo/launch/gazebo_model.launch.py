import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node
import xacro

def generate_launch_description():

    robot_name = 'my_first_robot'

    name_package = 'lab4_gazebo'
    xacro_path = 'models/differential-robot.xacro'
    path_model_file = os.path.join(get_package_share_directory(name_package), xacro_path)

    robot_description = xacro.process_file(path_model_file).toxml()

    gazebo_package_launch = PythonLaunchDescriptionSource(
        os.path.join(
            get_package_share_directory('ros_gz_sim'),
            'launch',
            'gz_sim.launch.py'
            )
        )
    
    gazebo_launch = IncludeLaunchDescription(
        gazebo_package_launch,
        launch_arguments={
            'gz_args': ['-r -v -v4 empty.sdf'], 
            'on_exit_shutdown': 'true'
            }.items()
        )

    spawn_model = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', robot_name,
            '-topic', 'robot_description'
        ],
        output='screen',
    )

    robot_state_pub = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True,
        }]
    )

    bridge_params = os.path.join(
        get_package_share_directory(name_package),
        'parameters',
        'bridge_parameters.yaml'
    )

    bridge_params_ros_gz = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '--ros-args',
            '-p',
            f'config_file:={bridge_params}',
        ]
    )

    return LaunchDescription([
        gazebo_launch,
        spawn_model,
        robot_state_pub,
        bridge_params_ros_gz,
    ])
