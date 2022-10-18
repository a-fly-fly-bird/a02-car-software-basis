cmake_minimum_required(VERSION 3.21)
project(2_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(2_
        main.cc
        printable.h
        saveable.h
        smart_car.cc
        smart_car.h
        student.cc
        student.h)
