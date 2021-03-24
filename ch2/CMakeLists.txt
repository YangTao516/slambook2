cmake_minimum_required(VERSION 3.0)

project(ch2)

add_library(hello_shared SHARED libHelloSLAM.cpp)

add_executable(helloslam helloSLAM.cpp)
add_executable(useHello useHello.cpp)
target_link_libraries(useHello hello_shared)

set(CMAKE_BUILD_TYPE "Debug")
