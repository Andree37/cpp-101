cmake_minimum_required(VERSION 3.8)
project(cpp-101)

set(CMAKE_CXX_STANDARD 20) # Try 11 if your compiler does not support C++20

add_executable(cpp-101 main.cpp classes.cpp classes.h weird-class.cpp weird-class.h)