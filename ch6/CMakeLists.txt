cmake_minimum_required(VERSION 3.0)

project(ch6)

set(CMAKE_CXX_FLAGS "-std=c++14 -O3")
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
# Eigen
find_package(Eigen3 3.1.0 REQUIRED)
include_directories( ${EIGEN3_INCLUDE_DIR} )

# Pangolin
#find_package(Pangolin REQUIRED)

# Sophus
#find_package( Sophus REQUIRED )
#set(Sophus_LIBRARIES libSophus.so)
#include_directories( ${Sophus_INCLUDE_DIRS} )

# OpenCV
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Ceres
find_package(Ceres REQUIRED)
include_directories(${CERES_INCLUDE_DIRS})

# g2o
find_package(G2O REQUIRED)
include_directories(${G2O_INCLUDE_DIRS})

add_executable(gaussNewton gaussNewton.cpp)
add_executable(ceresCurveFitting ceresCurveFitting.cpp)
target_link_libraries(gaussNewton ${OpenCV_LIBS})
target_link_libraries(ceresCurveFitting ${OpenCV_LIBS} ${CERES_LIBRARIES})

add_executable(g2oCurveFitting g2oCurveFitting.cpp)
target_link_libraries(g2oCurveFitting ${OpenCV_LIBS} ${G2O_CORE_LIBRARY} ${G2O_STUFF_LIBRARY})
