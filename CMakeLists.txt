cmake_minimum_required(VERSION 4.2)
project(C___Programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C___Programming
        start.cpp
        start.h
        calc.h
        calc.cpp
        prac.cpp
        class.cpp
        functions.cpp
        namespaces.cpp
        strings.cpp
        vector.cpp
        set.cpp
        map.cpp
        structs.cpp)
