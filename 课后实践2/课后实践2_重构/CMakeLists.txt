cmake_minimum_required(VERSION 3.21)

project(demo)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

FILE(GLOB_RECURSE CURRENT_INCLUDE include/*.h)

FILE(GLOB_RECURSE CURRENT_SOURCES src/*.cc)

add_executable(Demo ${CURRENT_SOURCES} ${CURRENT_INCLUDE})  #制定生成目标
