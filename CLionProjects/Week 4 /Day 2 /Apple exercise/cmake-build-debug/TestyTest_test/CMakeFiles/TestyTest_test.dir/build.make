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
CMAKE_SOURCE_DIR = "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug"

# Include any dependencies generated for this target.
include TestyTest_test/CMakeFiles/TestyTest_test.dir/depend.make

# Include the progress variables for this target.
include TestyTest_test/CMakeFiles/TestyTest_test.dir/progress.make

# Include the compile flags for this target's objects.
include TestyTest_test/CMakeFiles/TestyTest_test.dir/flags.make

TestyTest_test/CMakeFiles/TestyTest_test.dir/myTest.cpp.o: TestyTest_test/CMakeFiles/TestyTest_test.dir/flags.make
TestyTest_test/CMakeFiles/TestyTest_test.dir/myTest.cpp.o: ../TestyTest_test/myTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TestyTest_test/CMakeFiles/TestyTest_test.dir/myTest.cpp.o"
	cd "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestyTest_test.dir/myTest.cpp.o -c "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /TestyTest_test/myTest.cpp"

TestyTest_test/CMakeFiles/TestyTest_test.dir/myTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestyTest_test.dir/myTest.cpp.i"
	cd "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /TestyTest_test/myTest.cpp" > CMakeFiles/TestyTest_test.dir/myTest.cpp.i

TestyTest_test/CMakeFiles/TestyTest_test.dir/myTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestyTest_test.dir/myTest.cpp.s"
	cd "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /TestyTest_test/myTest.cpp" -o CMakeFiles/TestyTest_test.dir/myTest.cpp.s

# Object files for target TestyTest_test
TestyTest_test_OBJECTS = \
"CMakeFiles/TestyTest_test.dir/myTest.cpp.o"

# External object files for target TestyTest_test
TestyTest_test_EXTERNAL_OBJECTS =

TestyTest_test/TestyTest_test: TestyTest_test/CMakeFiles/TestyTest_test.dir/myTest.cpp.o
TestyTest_test/TestyTest_test: TestyTest_test/CMakeFiles/TestyTest_test.dir/build.make
TestyTest_test/TestyTest_test: lib/libgtestd.a
TestyTest_test/TestyTest_test: lib/libgtest_maind.a
TestyTest_test/TestyTest_test: TestyTest_lib/libTestyTest_lib.a
TestyTest_test/TestyTest_test: lib/libgtestd.a
TestyTest_test/TestyTest_test: TestyTest_test/CMakeFiles/TestyTest_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestyTest_test"
	cd "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestyTest_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TestyTest_test/CMakeFiles/TestyTest_test.dir/build: TestyTest_test/TestyTest_test

.PHONY : TestyTest_test/CMakeFiles/TestyTest_test.dir/build

TestyTest_test/CMakeFiles/TestyTest_test.dir/clean:
	cd "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test" && $(CMAKE_COMMAND) -P CMakeFiles/TestyTest_test.dir/cmake_clean.cmake
.PHONY : TestyTest_test/CMakeFiles/TestyTest_test.dir/clean

TestyTest_test/CMakeFiles/TestyTest_test.dir/depend:
	cd "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) " "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /TestyTest_test" "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug" "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test" "/Users/gasparmate/Desktop/School/mate0905/CLionProjects/week 4 day 4 ( Apple exercise ) /cmake-build-debug/TestyTest_test/CMakeFiles/TestyTest_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : TestyTest_test/CMakeFiles/TestyTest_test.dir/depend
