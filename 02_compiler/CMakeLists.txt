cmake_minimum_required(VERSION 3.23.5 FATAL_ERROR)

project(HelloWorld
        VERSION 1.0
        LANGUAGES CXX)
add_executable(hello_world func.cpp hello_world.cpp)
