cmake_minimum_required(VERSION 2.8)
project(programaprueba)

find_package(qibuild)

# Create a executable named programaprueba
# with the source file: main.cpp
qi_create_bin(programaprueba "main.cpp")

# Add a simple test:
qi_use_lib(programaprueba ALCOMMON ALPROXIES)
qi_use_lib(programaprueba OPENCV2_HIGHGUI OPENCV2_CORE OPENCV2_IMGPROC)
