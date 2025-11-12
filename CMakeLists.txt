cmake_minimum_required(VERSION 4.1.2)
project(CMakeHello)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CMakeHello main.cpp headers.cpp)