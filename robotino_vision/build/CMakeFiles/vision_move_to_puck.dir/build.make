# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/build

# Include any dependencies generated for this target.
include CMakeFiles/vision_move_to_puck.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vision_move_to_puck.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vision_move_to_puck.dir/flags.make

CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: CMakeFiles/vision_move_to_puck.dir/flags.make
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: ../src/vision_move_to_puck.cpp
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: ../manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/std_msgs/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/sensor_msgs/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/stacks/vision_opencv/cv_bridge/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/ros/core/rosbuild/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/roslib/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/rosconsole/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/stacks/pluginlib/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/share/message_filters/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /opt/ros/fuerte/stacks/image_common/image_transport/manifest.xml
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/msg_gen/generated
CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o: /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o -c /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/src/vision_move_to_puck.cpp

CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/src/vision_move_to_puck.cpp > CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.i

CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/src/vision_move_to_puck.cpp -o CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.s

CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.requires:
.PHONY : CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.requires

CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.provides: CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.requires
	$(MAKE) -f CMakeFiles/vision_move_to_puck.dir/build.make CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.provides.build
.PHONY : CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.provides

CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.provides.build: CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o

# Object files for target vision_move_to_puck
vision_move_to_puck_OBJECTS = \
"CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o"

# External object files for target vision_move_to_puck
vision_move_to_puck_EXTERNAL_OBJECTS =

../bin/vision_move_to_puck: CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o
../bin/vision_move_to_puck: CMakeFiles/vision_move_to_puck.dir/build.make
../bin/vision_move_to_puck: CMakeFiles/vision_move_to_puck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/vision_move_to_puck"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vision_move_to_puck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vision_move_to_puck.dir/build: ../bin/vision_move_to_puck
.PHONY : CMakeFiles/vision_move_to_puck.dir/build

CMakeFiles/vision_move_to_puck.dir/requires: CMakeFiles/vision_move_to_puck.dir/src/vision_move_to_puck.o.requires
.PHONY : CMakeFiles/vision_move_to_puck.dir/requires

CMakeFiles/vision_move_to_puck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vision_move_to_puck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vision_move_to_puck.dir/clean

CMakeFiles/vision_move_to_puck.dir/depend:
	cd /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/build /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/build /home/robotino/fuerte_workspace/sandbox/robotino/robotino_vision/build/CMakeFiles/vision_move_to_puck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vision_move_to_puck.dir/depend
