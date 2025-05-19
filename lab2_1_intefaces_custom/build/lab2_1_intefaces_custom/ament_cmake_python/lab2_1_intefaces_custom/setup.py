from setuptools import find_packages
from setuptools import setup

setup(
    name='lab2_1_intefaces_custom',
    version='0.0.0',
    packages=find_packages(
        include=('lab2_1_intefaces_custom', 'lab2_1_intefaces_custom.*')),
)
