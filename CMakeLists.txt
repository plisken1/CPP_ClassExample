cmake_minimum_required(VERSION 3.16)
project(CPP_ClassExample)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src)

add_executable(CPP_ClassExample
        src/CPP_ClassExample.cpp
        src/MyOtherClass.cpp
        src/MyOtherClass.h)
