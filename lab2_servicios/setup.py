from setuptools import find_packages, setup

package_name = 'lab2_servicios'

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
    maintainer_email='sebastianguajardoherrera@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'servicio_simple = lab2_servicios.servidor_simple:main',
            'cliente_simple = lab2_servicios.cliente_simple:main'
        ],
    },
)
