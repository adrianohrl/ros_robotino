cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE RelWithDebInfo)

rosbuild_init()

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#uncomment if you have defined messages
rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)
#rosbuild_add_executable(example examples/example.cpp)
#target_link_libraries(example ${PROJECT_NAME})

set(
  CMAKE_MODULE_PATH
  /usr/local/robotino/api2/cmake
)
find_package(RobotinoAPI2 REQUIRED)

rosbuild_add_executable(
  robotino_vision_node
  src/robotino_vision_node.cpp
  src/ComROS.cpp
  src/CameraROS.cpp
  src/RobotinoVision.cpp
  src/FindPuck.cpp
)

# openCV 

find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})

target_link_libraries(
  robotino_vision_node
  ${REC_ROBOTINO_API2_LIBRARY}
  ${OpenCV_LIBRARIES}
)

rosbuild_add_executable(vision_move_to_puck src/vision_move_to_puck.cpp)

#rosbuild_add_executable(get_pucks_polar_coordinates_server src/get_pucks_polar_coordinates_server.cpp)
