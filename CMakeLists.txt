cmake_minimum_required(VERSION 3.23)
project(technical_analysis_matcher_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(technical_analysis_matcher_cpp
        HelloWorld.cpp)
