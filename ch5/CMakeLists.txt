cmake_minimum_required(VERSION 3.0)

project(ch5)


set( CMAKE_CXX_FLAGS "-std=c++11")


find_package(Eigen3 3.1.0 REQUIRED)
include_directories( ${EIGEN3_INCLUDE_DIR} )
find_package(OpenCV REQUIRED)
find_package(Pangolin REQUIRED)
find_package( Sophus REQUIRED )
set(Sophus_LIBRARIES libSophus.so)
include_directories( ${Sophus_INCLUDE_DIRS} )

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( imageBasics imageBasics.cpp)
add_executable( undistortImage undistortImage.cpp)

target_link_libraries(undistortImage ${OpenCV_LIBS})
target_link_libraries(imageBasics ${OpenCV_LIBS})


add_executable(stereoVision stereoVision.cpp)
target_link_libraries(stereoVision ${OpenCV_LIBS} ${Pangolin_LIBRARIES})

add_executable(joinMap joinMap.cpp)
target_link_libraries(joinMap ${OpenCV_LIBS} ${Pangolin_LIBRARIES})
