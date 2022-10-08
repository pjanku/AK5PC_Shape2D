cmake_minimum_required(VERSION 3.23)
project(ShapeLib)

set(CMAKE_CXX_STANDARD 14)

add_library(ShapeLib
        src/point.cpp
        include/point.h
        src/rectangle.cpp include/rectangle.h)

target_include_directories(ShapeLib PUBLIC include)