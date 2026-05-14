from setuptools import find_packages
from setuptools import setup

setup(
    name='motor_action',
    version='0.0.0',
    packages=find_packages(
        include=('motor_action', 'motor_action.*')),
)
