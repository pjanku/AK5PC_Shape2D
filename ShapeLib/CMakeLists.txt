cmake_minimum_required(VERSION 3.23)
project(ShapeLib)

set(CMAKE_CXX_STANDARD 14)

add_library(ShapeLib
        src/point.cpp
        include/point.h
        src/rectangle.cpp
        include/rectangle.h
        src/shape.cpp
        include/shape.h
        src/circle.cpp
        include/circle.h
        )

target_include_directories(ShapeLib PUBLIC include)