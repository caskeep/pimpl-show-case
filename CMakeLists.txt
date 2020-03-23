cmake_minimum_required(VERSION 3.15)
project(pimpl_test1)

set(CMAKE_CXX_STANDARD 14)

add_executable(pimpl_test1
        main.cpp
        caller1.cpp
        caller2.cpp
        mywork.cpp
        )