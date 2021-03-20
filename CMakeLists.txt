cmake_minimum_required(VERSION 3.17)
project(OS_PROJECT)

set(CMAKE_CXX_STANDARD 14)

add_executable(OS_PROJECT main.cpp partitionFunctions.cpp partitionFunctions.h vdiHeader.h vdiFile.h superBlockFunctions.cpp superBlockFunctions.h inodeFunctions.cpp inodeFunctions.h)