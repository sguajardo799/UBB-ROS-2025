# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom

# Utility rule file for lab2_1_intefaces_custom__rosidl_generator_type_description.

# Include any custom commands dependencies for this target.
include CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/progress.make

CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description: rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json
CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description: rosidl_generator_type_description/lab2_1_intefaces_custom/srv/AddFourInts.json

rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json: /opt/ros/rolling/lib/rosidl_generator_type_description/rosidl_generator_type_description
rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json: /opt/ros/rolling/lib/python3.12/site-packages/rosidl_generator_type_description/__init__.py
rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json: rosidl_adapter/lab2_1_intefaces_custom/msg/Sphere.idl
rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json: rosidl_adapter/lab2_1_intefaces_custom/srv/AddFourInts.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating type hashes for ROS interfaces"
	/usr/bin/python3 /opt/ros/rolling/lib/rosidl_generator_type_description/rosidl_generator_type_description --generator-arguments-file /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom/rosidl_generator_type_description__arguments.json

rosidl_generator_type_description/lab2_1_intefaces_custom/srv/AddFourInts.json: rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_type_description/lab2_1_intefaces_custom/srv/AddFourInts.json

lab2_1_intefaces_custom__rosidl_generator_type_description: CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description
lab2_1_intefaces_custom__rosidl_generator_type_description: rosidl_generator_type_description/lab2_1_intefaces_custom/msg/Sphere.json
lab2_1_intefaces_custom__rosidl_generator_type_description: rosidl_generator_type_description/lab2_1_intefaces_custom/srv/AddFourInts.json
lab2_1_intefaces_custom__rosidl_generator_type_description: CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/build.make
.PHONY : lab2_1_intefaces_custom__rosidl_generator_type_description

# Rule to build all files generated by this target.
CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/build: lab2_1_intefaces_custom__rosidl_generator_type_description
.PHONY : CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/build

CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/clean

CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/depend:
	cd /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom /home/sguajardo/UBB-ROS-2025/lab2_1_intefaces_custom/build/lab2_1_intefaces_custom/CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lab2_1_intefaces_custom__rosidl_generator_type_description.dir/depend

