cmake_minimum_required(VERSION 3.10)

project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(ZadClassKCpp src/ZadKcpp.cc main.cc)
