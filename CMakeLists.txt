#cmake version
cmake_minimum_required(VERSION 3.10)

#project name
project(addresses)

#define c++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#define source directories, "include" is for headers and "src" is for implementation
include_directories(
        $a4/include
        $a4/src
)

#define a list, called SRC_FILES, that stores all source code files within "include" and "src"
file(GLOB_RECURSE SRC_FILES
        "$a4/include/*.h"
        "$a4/src/*.cpp"
        )

#include all source code files to generate an executable
add_executable(cmake_base_project main.cpp)
