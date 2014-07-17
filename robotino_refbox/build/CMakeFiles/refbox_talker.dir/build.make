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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/build

# Include any dependencies generated for this target.
include CMakeFiles/refbox_talker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/refbox_talker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/refbox_talker.dir/flags.make

CMakeFiles/refbox_talker.dir/src/refbox_talker.o: CMakeFiles/refbox_talker.dir/flags.make
CMakeFiles/refbox_talker.dir/src/refbox_talker.o: ../src/refbox_talker.cpp
CMakeFiles/refbox_talker.dir/src/refbox_talker.o: ../manifest.xml
CMakeFiles/refbox_talker.dir/src/refbox_talker.o: /opt/ros/fuerte/share/std_msgs/manifest.xml
CMakeFiles/refbox_talker.dir/src/refbox_talker.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/refbox_talker.dir/src/refbox_talker.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/refbox_talker.dir/src/refbox_talker.o: /opt/ros/fuerte/share/roscpp/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/refbox_talker.dir/src/refbox_talker.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/refbox_talker.dir/src/refbox_talker.o -c /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/src/refbox_talker.cpp

CMakeFiles/refbox_talker.dir/src/refbox_talker.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/refbox_talker.dir/src/refbox_talker.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/src/refbox_talker.cpp > CMakeFiles/refbox_talker.dir/src/refbox_talker.i

CMakeFiles/refbox_talker.dir/src/refbox_talker.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/refbox_talker.dir/src/refbox_talker.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/src/refbox_talker.cpp -o CMakeFiles/refbox_talker.dir/src/refbox_talker.s

CMakeFiles/refbox_talker.dir/src/refbox_talker.o.requires:
.PHONY : CMakeFiles/refbox_talker.dir/src/refbox_talker.o.requires

CMakeFiles/refbox_talker.dir/src/refbox_talker.o.provides: CMakeFiles/refbox_talker.dir/src/refbox_talker.o.requires
	$(MAKE) -f CMakeFiles/refbox_talker.dir/build.make CMakeFiles/refbox_talker.dir/src/refbox_talker.o.provides.build
.PHONY : CMakeFiles/refbox_talker.dir/src/refbox_talker.o.provides

CMakeFiles/refbox_talker.dir/src/refbox_talker.o.provides.build: CMakeFiles/refbox_talker.dir/src/refbox_talker.o

# Object files for target refbox_talker
refbox_talker_OBJECTS = \
"CMakeFiles/refbox_talker.dir/src/refbox_talker.o"

# External object files for target refbox_talker
refbox_talker_EXTERNAL_OBJECTS =

../bin/refbox_talker: CMakeFiles/refbox_talker.dir/src/refbox_talker.o
../bin/refbox_talker: CMakeFiles/refbox_talker.dir/build.make
../bin/refbox_talker: CMakeFiles/refbox_talker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/refbox_talker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/refbox_talker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/refbox_talker.dir/build: ../bin/refbox_talker
.PHONY : CMakeFiles/refbox_talker.dir/build

CMakeFiles/refbox_talker.dir/requires: CMakeFiles/refbox_talker.dir/src/refbox_talker.o.requires
.PHONY : CMakeFiles/refbox_talker.dir/requires

CMakeFiles/refbox_talker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/refbox_talker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/refbox_talker.dir/clean

CMakeFiles/refbox_talker.dir/depend:
	cd /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/build /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/build /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_refbox/build/CMakeFiles/refbox_talker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/refbox_talker.dir/depend

