#foo
from setuptools import setup, find_packages

setup(
    name='Jupyter-Calcs',
    version='0.1.0',
    packages=find_packages(include=['Jupyter-Calcs', 'Jupyter-Calcs.*'])
)