# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/week_6_day_2__car_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/week_6_day_2__car_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week_6_day_2__car_.dir/flags.make

CMakeFiles/week_6_day_2__car_.dir/main.c.o: CMakeFiles/week_6_day_2__car_.dir/flags.make
CMakeFiles/week_6_day_2__car_.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/week_6_day_2__car_.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/week_6_day_2__car_.dir/main.c.o   -c "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/main.c"

CMakeFiles/week_6_day_2__car_.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/week_6_day_2__car_.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/main.c" > CMakeFiles/week_6_day_2__car_.dir/main.c.i

CMakeFiles/week_6_day_2__car_.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/week_6_day_2__car_.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/main.c" -o CMakeFiles/week_6_day_2__car_.dir/main.c.s

# Object files for target week_6_day_2__car_
week_6_day_2__car__OBJECTS = \
"CMakeFiles/week_6_day_2__car_.dir/main.c.o"

# External object files for target week_6_day_2__car_
week_6_day_2__car__EXTERNAL_OBJECTS =

week_6_day_2__car_: CMakeFiles/week_6_day_2__car_.dir/main.c.o
week_6_day_2__car_: CMakeFiles/week_6_day_2__car_.dir/build.make
week_6_day_2__car_: CMakeFiles/week_6_day_2__car_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable week_6_day_2__car_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week_6_day_2__car_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week_6_day_2__car_.dir/build: week_6_day_2__car_

.PHONY : CMakeFiles/week_6_day_2__car_.dir/build

CMakeFiles/week_6_day_2__car_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week_6_day_2__car_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week_6_day_2__car_.dir/clean

CMakeFiles/week_6_day_2__car_.dir/depend:
	cd "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)" "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)" "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug" "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug" "/Users/gasparmate/Desktop/School/Repository (github)/CLionProjects/week 6 day 2 (car)/cmake-build-debug/CMakeFiles/week_6_day_2__car_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/week_6_day_2__car_.dir/depend

