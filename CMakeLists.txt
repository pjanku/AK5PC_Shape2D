cmake_minimum_required(VERSION 3.23)
project(Shape2D)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(ShapeLib)

add_executable(Shape2D main.cpp)

target_link_libraries(Shape2D ShapeLib)
target_include_directories(Shape2D PUBLIC ShapeLib/include)
