cmake_minimum_required(VERSION 3.0)

project(ch3)

set(CMAKE_CXX_FLAGS "-std=c++11")
include_directories( "/usr/include/eigen3" )
find_package( Pangolin )
include_directories( ${Pangolin_INCLUDE_DIRS} )

#add_executable(eigenMartix eigenMartix.cpp)
#add_executable(useGeometry useGeometry.cpp)

add_executable(plotTrajectory plotTrajectory.cpp)
target_link_libraries(plotTrajectory ${Pangolin_LIBRARIES})


#add_executable(coordinateTransform coordinateTransform.cpp)





add_executable( visualizeGeometry visualizeGeometry.cpp )
target_link_libraries( visualizeGeometry ${Pangolin_LIBRARIES} )
