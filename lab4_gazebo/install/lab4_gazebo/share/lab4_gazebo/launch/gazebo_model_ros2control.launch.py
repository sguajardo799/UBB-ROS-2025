import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import xacro
from launch.actions import TimerAction


def generate_launch_description():

    # Nombre del robot que usaremos en la simulación
    robot_name = 'my_first_robot'

    # Nombre del paquete donde están los archivos del robot
    name_package = 'lab4_gazebo'
    
    # Ruta al archivo .xacro que describe el modelo del robot
    xacro_path = 'models/differential-robot.xacro'
    path_model_file = os.path.join(get_package_share_directory(name_package), xacro_path)
    # get_package_share_directory -> Busca la ruta absoluta al directorio share/ de un paquete ROS 2 instalado en el sistema. 
    #                                Es útil para cargar archivos como URDF, mundos, configuraciones YAML, etc.

    # Procesamos el archivo .xacro para obtener la descripción del robot en formato XML
    robot_description = xacro.process_file(path_model_file).toxml()

    # Ruta al archivo de lanzamiento de Gazebo Sim (Ignition)
    gazebo_package_launch = PythonLaunchDescriptionSource(
        os.path.join(
            get_package_share_directory('ros_gz_sim'),
            'launch',
            'gz_sim.launch.py'
        )
    )
    # PythonLaunchDescriptionSource -> Permite incluir otro archivo de lanzamiento escrito en Python (como gz_sim.launch.py) 
    #                                  dentro del archivo de lanzamiento actual. Es parte del mecanismo de composicion.

    # Incluir el lanzamiento de Gazebo, especificando el mundo a usar ('empty.sdf')
    gazebo_launch = IncludeLaunchDescription(
        gazebo_package_launch,
        launch_arguments={
            'gz_args': ['-r -v -v4 empty.sdf'],  # -r: auto start, -v4: verbosity level
            'on_exit_shutdown': 'true'           # Apagar todo al cerrar Gazebo
        }.items()
    )

    # Nodo que publica la descripción del robot en el tópico 'robot_description'
    robot_state_pub = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True,  # Usar el tiempo simulado de Gazebo
        }]
    )

    # Nodo que crea (spawnea) el modelo en Gazebo, tomando la descripción desde el tópico 'robot_description'
    spawn_model = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', robot_name,
            '-topic', 'robot_description'
        ],
        output='screen',
    )

    controller_manager_spawner_joint_state = Node(
    package='controller_manager',
    executable='spawner',
    arguments=['joint_state_broadcaster'],
    output='screen'
    )

    controller_manager_spawner_diff_drive = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['diff_drive_controller', '--param-file', '/home/sguajardo/UBB-ROS-2025/lab4_gazebo/controllers/diff_drive_controller.yaml'],
        output='screen'
    )

    delayed_diff_drive = TimerAction(
        period=3.0,
        actions=[controller_manager_spawner_diff_drive]
    )


    # Ruta al archivo de configuración del bridge ROS <-> Gazebo (topics a enlazar)
    bridge_params = os.path.join(
        get_package_share_directory(name_package),
        'parameters',
        'bridge_parameters.yaml'
    )

    # Nodo del bridge que usa los parámetros definidos en el archivo YAML
    bridge_params_ros_gz = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '--ros-args',
            '-p',
            f'config_file:={bridge_params}',
        ]
    )

    # Retornamos la descripción completa del lanzamiento: Gazebo + publicación + spawn + bridge
    return LaunchDescription([
        gazebo_launch,
        spawn_model,
        robot_state_pub,
        bridge_params_ros_gz,
        controller_manager_spawner_joint_state,
        delayed_diff_drive
    ])
