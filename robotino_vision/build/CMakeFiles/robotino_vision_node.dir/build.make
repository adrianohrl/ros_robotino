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
CMAKE_SOURCE_DIR = /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build

# Include any dependencies generated for this target.
include CMakeFiles/robotino_vision_node.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/robotino_vision_node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/robotino_vision_node.dir/flags.make

CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: CMakeFiles/robotino_vision_node.dir/flags.make
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: ../src/robotino_vision_node.cpp
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: ../manifest.xml
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: /opt/ros/fuerte/share/std_msgs/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o -c /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/robotino_vision_node.cpp

CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/robotino_vision_node.cpp > CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.i

CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/robotino_vision_node.cpp -o CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.s

CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.requires:
.PHONY : CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.requires

CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.provides: CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.requires
	$(MAKE) -f CMakeFiles/robotino_vision_node.dir/build.make CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.provides.build
.PHONY : CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.provides

CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.provides.build: CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o

CMakeFiles/robotino_vision_node.dir/src/ComROS.o: CMakeFiles/robotino_vision_node.dir/flags.make
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: ../src/ComROS.cpp
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: ../manifest.xml
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: /opt/ros/fuerte/share/std_msgs/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/ComROS.o: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/robotino_vision_node.dir/src/ComROS.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/robotino_vision_node.dir/src/ComROS.o -c /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/ComROS.cpp

CMakeFiles/robotino_vision_node.dir/src/ComROS.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robotino_vision_node.dir/src/ComROS.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/ComROS.cpp > CMakeFiles/robotino_vision_node.dir/src/ComROS.i

CMakeFiles/robotino_vision_node.dir/src/ComROS.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robotino_vision_node.dir/src/ComROS.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/ComROS.cpp -o CMakeFiles/robotino_vision_node.dir/src/ComROS.s

CMakeFiles/robotino_vision_node.dir/src/ComROS.o.requires:
.PHONY : CMakeFiles/robotino_vision_node.dir/src/ComROS.o.requires

CMakeFiles/robotino_vision_node.dir/src/ComROS.o.provides: CMakeFiles/robotino_vision_node.dir/src/ComROS.o.requires
	$(MAKE) -f CMakeFiles/robotino_vision_node.dir/build.make CMakeFiles/robotino_vision_node.dir/src/ComROS.o.provides.build
.PHONY : CMakeFiles/robotino_vision_node.dir/src/ComROS.o.provides

CMakeFiles/robotino_vision_node.dir/src/ComROS.o.provides.build: CMakeFiles/robotino_vision_node.dir/src/ComROS.o

CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: CMakeFiles/robotino_vision_node.dir/flags.make
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: ../src/CameraROS.cpp
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: ../manifest.xml
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: /opt/ros/fuerte/share/std_msgs/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/CameraROS.o: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/robotino_vision_node.dir/src/CameraROS.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/robotino_vision_node.dir/src/CameraROS.o -c /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/CameraROS.cpp

CMakeFiles/robotino_vision_node.dir/src/CameraROS.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robotino_vision_node.dir/src/CameraROS.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/CameraROS.cpp > CMakeFiles/robotino_vision_node.dir/src/CameraROS.i

CMakeFiles/robotino_vision_node.dir/src/CameraROS.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robotino_vision_node.dir/src/CameraROS.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/CameraROS.cpp -o CMakeFiles/robotino_vision_node.dir/src/CameraROS.s

CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.requires:
.PHONY : CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.requires

CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.provides: CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.requires
	$(MAKE) -f CMakeFiles/robotino_vision_node.dir/build.make CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.provides.build
.PHONY : CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.provides

CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.provides.build: CMakeFiles/robotino_vision_node.dir/src/CameraROS.o

CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: CMakeFiles/robotino_vision_node.dir/flags.make
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: ../src/RobotinoVision.cpp
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: ../manifest.xml
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: /opt/ros/fuerte/share/std_msgs/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o -c /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/RobotinoVision.cpp

CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/RobotinoVision.cpp > CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.i

CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/src/RobotinoVision.cpp -o CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.s

CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.requires:
.PHONY : CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.requires

CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.provides: CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.requires
	$(MAKE) -f CMakeFiles/robotino_vision_node.dir/build.make CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.provides.build
.PHONY : CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.provides

CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.provides.build: CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o

# Object files for target robotino_vision_node
robotino_vision_node_OBJECTS = \
"CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o" \
"CMakeFiles/robotino_vision_node.dir/src/ComROS.o" \
"CMakeFiles/robotino_vision_node.dir/src/CameraROS.o" \
"CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o"

# External object files for target robotino_vision_node
robotino_vision_node_EXTERNAL_OBJECTS =

../bin/robotino_vision_node: CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o
../bin/robotino_vision_node: CMakeFiles/robotino_vision_node.dir/src/ComROS.o
../bin/robotino_vision_node: CMakeFiles/robotino_vision_node.dir/src/CameraROS.o
../bin/robotino_vision_node: CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o
../bin/robotino_vision_node: /usr/local/robotino/api2/lib/librec_robotino_api2.so
../bin/robotino_vision_node: CMakeFiles/robotino_vision_node.dir/build.make
../bin/robotino_vision_node: CMakeFiles/robotino_vision_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/robotino_vision_node"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robotino_vision_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/robotino_vision_node.dir/build: ../bin/robotino_vision_node
.PHONY : CMakeFiles/robotino_vision_node.dir/build

CMakeFiles/robotino_vision_node.dir/requires: CMakeFiles/robotino_vision_node.dir/src/robotino_vision_node.o.requires
CMakeFiles/robotino_vision_node.dir/requires: CMakeFiles/robotino_vision_node.dir/src/ComROS.o.requires
CMakeFiles/robotino_vision_node.dir/requires: CMakeFiles/robotino_vision_node.dir/src/CameraROS.o.requires
CMakeFiles/robotino_vision_node.dir/requires: CMakeFiles/robotino_vision_node.dir/src/RobotinoVision.o.requires
.PHONY : CMakeFiles/robotino_vision_node.dir/requires

CMakeFiles/robotino_vision_node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/robotino_vision_node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/robotino_vision_node.dir/clean

CMakeFiles/robotino_vision_node.dir/depend:
	cd /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles/robotino_vision_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/robotino_vision_node.dir/depend

