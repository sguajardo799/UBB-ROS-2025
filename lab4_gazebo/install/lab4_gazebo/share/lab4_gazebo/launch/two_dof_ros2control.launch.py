import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import xacro

def generate_launch_description():

    # Nombre del robot en Gazebo
    robot_name = 'two_dof_robot'

    # Nombre del paquete del robot
    name_package = 'lab4_gazebo'

    # Ruta al archivo XACRO del modelo del robot
    xacro_path = 'models/two_dof.urdf.xacro'
    path_model_file = os.path.join(get_package_share_directory(name_package), xacro_path)

    # Procesar el XACRO y obtener el URDF como XML
    robot_description = xacro.process_file(path_model_file).toxml()

    # Ruta al launch de Gazebo (Ignition)
    gazebo_package_launch = PythonLaunchDescriptionSource(
        os.path.join(
            get_package_share_directory('ros_gz_sim'),
            'launch',
            'gz_sim.launch.py'
        )
    )

    # Lanzamiento de Gazebo con el mundo vacío y verbose alto
    gazebo_launch = IncludeLaunchDescription(
        gazebo_package_launch,
        launch_arguments={
            'gz_args': ['-r -v 4 empty.sdf'],
            'on_exit_shutdown': 'true'
        }.items()
    )

    # Publicador de estado del robot (TFs + descripción)
    robot_state_pub = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True
        }]
    )

    # Nodo para crear el modelo en Gazebo usando el tópico robot_description
    spawn_model = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', robot_name,
            '-topic', 'robot_description'
        ],
        output='screen'
    )

    # Spawner del joint_state_broadcaster (para tener lectura de articulaciones)
    controller_manager_spawner_joint_state = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster'],
        output='screen'
    )

    # Spawner del controlador de posición (usa archivo YAML)
    controller_manager_spawner_joint_position = Node(
        package='controller_manager',
        executable='spawner',
        arguments=[
            'joint_position_controller',
            '--param-file',
            os.path.join(get_package_share_directory(name_package), 'config', 'controllers.yaml')
        ],
        output='screen'
    )

    # Retraso para iniciar el controlador luego que Gazebo esté listo
    delayed_joint_controller = TimerAction(
        period=3.0,
        actions=[controller_manager_spawner_joint_position]
    )

    # Bridge ROS ↔ Gazebo para tópicos importantes como clock y joint_states
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            '/joint_states@sensor_msgs/msg/JointState[gz.msgs.Model',
        ],
        output='screen'
    )

    # Devolvemos todos los nodos y acciones como un LaunchDescription
    return LaunchDescription([
        gazebo_launch,
        robot_state_pub,
        spawn_model,
        bridge,
        controller_manager_spawner_joint_state,
        delayed_joint_controller
    ])
