cmake_minimum_required(VERSION 3.0)

project(ch4)

set(CMAKE_CXX_FLAGS "-std=c++11")
# 为使用 sophus，需要使用find_package命令找到它

find_package( Sophus REQUIRED )
set(Sophus_LIBRARIES libSophus.so)
include_directories( ${Sophus_INCLUDE_DIRS} )

# Eigen
find_package(Eigen3 3.1.0 REQUIRED)
include_directories( ${EIGEN3_INCLUDE_DIR} )
    
    
    
add_executable(useSophus useSophus.cpp)


add_subdirectory(example)
