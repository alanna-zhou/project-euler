# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alanna/Documents/Code/project-euler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alanna/Documents/Code/project-euler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project_euler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project_euler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project_euler.dir/flags.make

CMakeFiles/project_euler.dir/problem4.cpp.o: CMakeFiles/project_euler.dir/flags.make
CMakeFiles/project_euler.dir/problem4.cpp.o: ../problem4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alanna/Documents/Code/project-euler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project_euler.dir/problem4.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_euler.dir/problem4.cpp.o -c /Users/alanna/Documents/Code/project-euler/problem4.cpp

CMakeFiles/project_euler.dir/problem4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_euler.dir/problem4.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alanna/Documents/Code/project-euler/problem4.cpp > CMakeFiles/project_euler.dir/problem4.cpp.i

CMakeFiles/project_euler.dir/problem4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_euler.dir/problem4.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alanna/Documents/Code/project-euler/problem4.cpp -o CMakeFiles/project_euler.dir/problem4.cpp.s

CMakeFiles/project_euler.dir/problem4.cpp.o.requires:

.PHONY : CMakeFiles/project_euler.dir/problem4.cpp.o.requires

CMakeFiles/project_euler.dir/problem4.cpp.o.provides: CMakeFiles/project_euler.dir/problem4.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_euler.dir/build.make CMakeFiles/project_euler.dir/problem4.cpp.o.provides.build
.PHONY : CMakeFiles/project_euler.dir/problem4.cpp.o.provides

CMakeFiles/project_euler.dir/problem4.cpp.o.provides.build: CMakeFiles/project_euler.dir/problem4.cpp.o


# Object files for target project_euler
project_euler_OBJECTS = \
"CMakeFiles/project_euler.dir/problem4.cpp.o"

# External object files for target project_euler
project_euler_EXTERNAL_OBJECTS =

project_euler: CMakeFiles/project_euler.dir/problem4.cpp.o
project_euler: CMakeFiles/project_euler.dir/build.make
project_euler: CMakeFiles/project_euler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alanna/Documents/Code/project-euler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project_euler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project_euler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project_euler.dir/build: project_euler

.PHONY : CMakeFiles/project_euler.dir/build

CMakeFiles/project_euler.dir/requires: CMakeFiles/project_euler.dir/problem4.cpp.o.requires

.PHONY : CMakeFiles/project_euler.dir/requires

CMakeFiles/project_euler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project_euler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project_euler.dir/clean

CMakeFiles/project_euler.dir/depend:
	cd /Users/alanna/Documents/Code/project-euler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alanna/Documents/Code/project-euler /Users/alanna/Documents/Code/project-euler /Users/alanna/Documents/Code/project-euler/cmake-build-debug /Users/alanna/Documents/Code/project-euler/cmake-build-debug /Users/alanna/Documents/Code/project-euler/cmake-build-debug/CMakeFiles/project_euler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project_euler.dir/depend
