# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/fulluser/CLionProjects/cop3363

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fulluser/CLionProjects/cop3363/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stringfun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stringfun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stringfun.dir/flags.make

CMakeFiles/stringfun.dir/stringfun.cpp.o: CMakeFiles/stringfun.dir/flags.make
CMakeFiles/stringfun.dir/stringfun.cpp.o: ../stringfun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/cop3363/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stringfun.dir/stringfun.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stringfun.dir/stringfun.cpp.o -c /Users/fulluser/CLionProjects/cop3363/stringfun.cpp

CMakeFiles/stringfun.dir/stringfun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stringfun.dir/stringfun.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/cop3363/stringfun.cpp > CMakeFiles/stringfun.dir/stringfun.cpp.i

CMakeFiles/stringfun.dir/stringfun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stringfun.dir/stringfun.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/cop3363/stringfun.cpp -o CMakeFiles/stringfun.dir/stringfun.cpp.s

CMakeFiles/stringfun.dir/stringfun.cpp.o.requires:

.PHONY : CMakeFiles/stringfun.dir/stringfun.cpp.o.requires

CMakeFiles/stringfun.dir/stringfun.cpp.o.provides: CMakeFiles/stringfun.dir/stringfun.cpp.o.requires
	$(MAKE) -f CMakeFiles/stringfun.dir/build.make CMakeFiles/stringfun.dir/stringfun.cpp.o.provides.build
.PHONY : CMakeFiles/stringfun.dir/stringfun.cpp.o.provides

CMakeFiles/stringfun.dir/stringfun.cpp.o.provides.build: CMakeFiles/stringfun.dir/stringfun.cpp.o


# Object files for target stringfun
stringfun_OBJECTS = \
"CMakeFiles/stringfun.dir/stringfun.cpp.o"

# External object files for target stringfun
stringfun_EXTERNAL_OBJECTS =

stringfun: CMakeFiles/stringfun.dir/stringfun.cpp.o
stringfun: CMakeFiles/stringfun.dir/build.make
stringfun: CMakeFiles/stringfun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fulluser/CLionProjects/cop3363/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stringfun"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stringfun.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stringfun.dir/build: stringfun

.PHONY : CMakeFiles/stringfun.dir/build

CMakeFiles/stringfun.dir/requires: CMakeFiles/stringfun.dir/stringfun.cpp.o.requires

.PHONY : CMakeFiles/stringfun.dir/requires

CMakeFiles/stringfun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stringfun.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stringfun.dir/clean

CMakeFiles/stringfun.dir/depend:
	cd /Users/fulluser/CLionProjects/cop3363/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fulluser/CLionProjects/cop3363 /Users/fulluser/CLionProjects/cop3363 /Users/fulluser/CLionProjects/cop3363/cmake-build-debug /Users/fulluser/CLionProjects/cop3363/cmake-build-debug /Users/fulluser/CLionProjects/cop3363/cmake-build-debug/CMakeFiles/stringfun.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stringfun.dir/depend
