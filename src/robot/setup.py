from setuptools import find_packages, setup
import os
from glob import glob 

package_name = 'robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'urdf'), glob(os.path.join('urdf/*.urdf'))), 
        (os.path.join('share', package_name, 'rviz'), glob(os.path.join('rviz/*.rviz')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lydia-chheng',
    maintainer_email='chhenglydia34@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'odometry_publisher = robot.Odom_publisher:main', 
            'odometry_subscriber = robot.Odom_subscriber:main'
        ],
    },
)
