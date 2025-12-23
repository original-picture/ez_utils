cmake_minimum_required(VERSION 3.22)

project(ez_utils_project VERSION 0.0.1)

set (CMAKE_CXX_STANDARD 20)

add_library(ez_utils ez_file_io.cpp)
target_include_directories(ez_utils PUBLIC ${PROJECT_SOURCE_DIR})