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
CMAKE_SOURCE_DIR = /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build

# Utility rule file for ROSBUILD_genmsg_py.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_genmsg_py.dir/progress.make

CMakeFiles/ROSBUILD_genmsg_py: ../src/robotino_vision/msg/__init__.py

../src/robotino_vision/msg/__init__.py: ../src/robotino_vision/msg/_LampPostState.py
../src/robotino_vision/msg/__init__.py: ../src/robotino_vision/msg/_CameraMode.py
../src/robotino_vision/msg/__init__.py: ../src/robotino_vision/msg/_PuckState.py
../src/robotino_vision/msg/__init__.py: ../src/robotino_vision/msg/_LampState.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/robotino_vision/msg/__init__.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --initpy /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/LampPostState.msg /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/CameraMode.msg /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/PuckState.msg /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/LampState.msg

../src/robotino_vision/msg/_LampPostState.py: ../msg/LampPostState.msg
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/robotino_vision/msg/_LampPostState.py: ../msg/LampState.msg
../src/robotino_vision/msg/_LampPostState.py: ../manifest.xml
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/share/rospy/manifest.xml
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/robotino_vision/msg/_LampPostState.py: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/robotino_vision/msg/_LampPostState.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/LampPostState.msg

../src/robotino_vision/msg/_CameraMode.py: ../msg/CameraMode.msg
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/robotino_vision/msg/_CameraMode.py: ../manifest.xml
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/share/rospy/manifest.xml
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/robotino_vision/msg/_CameraMode.py: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/robotino_vision/msg/_CameraMode.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/CameraMode.msg

../src/robotino_vision/msg/_PuckState.py: ../msg/PuckState.msg
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/robotino_vision/msg/_PuckState.py: ../manifest.xml
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/share/rospy/manifest.xml
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/robotino_vision/msg/_PuckState.py: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/robotino_vision/msg/_PuckState.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/PuckState.msg

../src/robotino_vision/msg/_LampState.py: ../msg/LampState.msg
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/robotino_vision/msg/_LampState.py: ../manifest.xml
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/share/rospy/manifest.xml
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/robotino_vision/msg/_LampState.py: /opt/ros/fuerte/stacks/vision_opencv/opencv2/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/robotino_vision/msg/_LampState.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/genmsg_py.py --noinitpy /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/LampState.msg

ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py
ROSBUILD_genmsg_py: ../src/robotino_vision/msg/__init__.py
ROSBUILD_genmsg_py: ../src/robotino_vision/msg/_LampPostState.py
ROSBUILD_genmsg_py: ../src/robotino_vision/msg/_CameraMode.py
ROSBUILD_genmsg_py: ../src/robotino_vision/msg/_PuckState.py
ROSBUILD_genmsg_py: ../src/robotino_vision/msg/_LampState.py
ROSBUILD_genmsg_py: CMakeFiles/ROSBUILD_genmsg_py.dir/build.make
.PHONY : ROSBUILD_genmsg_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_genmsg_py.dir/build: ROSBUILD_genmsg_py
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/build

CMakeFiles/ROSBUILD_genmsg_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/clean

CMakeFiles/ROSBUILD_genmsg_py.dir/depend:
	cd /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/build/CMakeFiles/ROSBUILD_genmsg_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_genmsg_py.dir/depend

