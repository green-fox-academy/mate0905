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
CMAKE_SOURCE_DIR = "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/week_2_day_2___pointer_size___.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/week_2_day_2___pointer_size___.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week_2_day_2___pointer_size___.dir/flags.make

CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.o: CMakeFiles/week_2_day_2___pointer_size___.dir/flags.make
CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.o -c "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /main.cpp"

CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /main.cpp" > CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.i

CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /main.cpp" -o CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.s

# Object files for target week_2_day_2___pointer_size___
week_2_day_2___pointer_size____OBJECTS = \
"CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.o"

# External object files for target week_2_day_2___pointer_size___
week_2_day_2___pointer_size____EXTERNAL_OBJECTS =

week_2_day_2___pointer_size___: CMakeFiles/week_2_day_2___pointer_size___.dir/main.cpp.o
week_2_day_2___pointer_size___: CMakeFiles/week_2_day_2___pointer_size___.dir/build.make
week_2_day_2___pointer_size___: CMakeFiles/week_2_day_2___pointer_size___.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable week_2_day_2___pointer_size___"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week_2_day_2___pointer_size___.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week_2_day_2___pointer_size___.dir/build: week_2_day_2___pointer_size___

.PHONY : CMakeFiles/week_2_day_2___pointer_size___.dir/build

CMakeFiles/week_2_day_2___pointer_size___.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week_2_day_2___pointer_size___.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week_2_day_2___pointer_size___.dir/clean

CMakeFiles/week_2_day_2___pointer_size___.dir/depend:
	cd "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) " "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) " "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug" "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug" "/Users/gasparmate/Desktop/suli/mate0905/CLionProjects/week 2 day 2 ( pointer size ) /cmake-build-debug/CMakeFiles/week_2_day_2___pointer_size___.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/week_2_day_2___pointer_size___.dir/depend

