cmake_minimum_required(VERSION 3.21)

project(demo)

set(CMAKE_CXX_STANDARD 11)

add_executable(demo saveable.h printable.h student.cc student.h smart_car.cc smart_car.h helper_function.cc helper_function.h bind_info.cc bind_info.h main.cc)
