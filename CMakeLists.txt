cmake_minimum_required(VERSION 3.5)

project(003 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(003 main.cpp)
set(HEADER_FILE_ONLY $003/params.h)

