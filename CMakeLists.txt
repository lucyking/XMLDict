# cmake_minimum_required(VERSION <specify CMake version here>)
project(XMLDict)

set(CMAKE_CXX_STANDARD 14)

add_executable(XMLDict main.cpp lib/tinyxml2.cpp lib/tinyxml2.h)