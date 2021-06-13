cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
project(pytorch)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(pytorch pytorch.cpp)
target_link_libraries(pytorch "${TORCH_LIBRARIES}")
set_property(TARGET pytorch PROPERTY CXX_STANDARD 14)
