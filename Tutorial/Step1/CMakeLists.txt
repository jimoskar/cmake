cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
# set the project name
project(Tutorial)

# add the executable
add_executable(Tutorial tutorial.cpp)