# two_dof/launch/sim.launch.py
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg = get_package_share_directory('two_dof')

    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg, 'launch', 'rsp.launch.py')),
        launch_arguments={'use_sim_time': 'true',
                          'use_ros2_control': 'true'}.items())

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('gazebo_ros'),
                         'launch', 'gazebo.launch.py')))

    spawn = Node(package='gazebo_ros',
                 executable='spawn_entity.py',
                 arguments=['-topic', 'robot_description',
                            '-entity', 'two_dof'],
                 output='screen')

    jsb = Node(package='controller_manager',
               executable='spawner',
               arguments=['joint_state_broadcaster'],
               output='screen')

    jtc = TimerAction(period=2.0, actions=[
            Node(package='controller_manager',
                 executable='spawner',
                 arguments=['joint_trajectory_controller'], 
                 output='screen')])

    return LaunchDescription([rsp, gazebo, spawn, jsb, jtc])
