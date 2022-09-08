cmake_minimum_required(VERSION 3.16)

project(panda VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(animal)

add_executable(panda main.cpp)

target_link_libraries(panda animal)

