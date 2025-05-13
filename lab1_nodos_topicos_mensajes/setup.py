from setuptools import find_packages, setup

package_name = 'lab1_nodos_topicos_mensajes'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sguajardo',
    maintainer_email='sguajardo@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'nodo_s = lab1_nodos_topicos_mensajes.nodo_simple:main',
            'pub_simple = lab1_nodos_topicos_mensajes.publicador_simple:main',
            'sub_simple = lab1_nodos_topicos_mensajes.suscriptor_simple:main'
        ],
    },
)
