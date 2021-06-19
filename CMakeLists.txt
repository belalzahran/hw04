cmake_minimum_required(VERSION 3.19)
project(hw03)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw03
        Architect.cpp
        Architect.h
        Date.cpp
        Date.h
        Employee.cpp
        Employee.h
        hw03.cpp
        Programmer.cpp
        Programmer.h)
