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
CMAKE_SOURCE_DIR = /Users/fulluser/CLionProjects/COP3330

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fulluser/CLionProjects/COP3330/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/song.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/song.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/song.dir/flags.make

CMakeFiles/song.dir/Playlist/song.cpp.o: CMakeFiles/song.dir/flags.make
CMakeFiles/song.dir/Playlist/song.cpp.o: ../Playlist/song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/song.dir/Playlist/song.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/song.dir/Playlist/song.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Playlist/song.cpp

CMakeFiles/song.dir/Playlist/song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/song.dir/Playlist/song.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Playlist/song.cpp > CMakeFiles/song.dir/Playlist/song.cpp.i

CMakeFiles/song.dir/Playlist/song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/song.dir/Playlist/song.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Playlist/song.cpp -o CMakeFiles/song.dir/Playlist/song.cpp.s

CMakeFiles/song.dir/Playlist/song.cpp.o.requires:

.PHONY : CMakeFiles/song.dir/Playlist/song.cpp.o.requires

CMakeFiles/song.dir/Playlist/song.cpp.o.provides: CMakeFiles/song.dir/Playlist/song.cpp.o.requires
	$(MAKE) -f CMakeFiles/song.dir/build.make CMakeFiles/song.dir/Playlist/song.cpp.o.provides.build
.PHONY : CMakeFiles/song.dir/Playlist/song.cpp.o.provides

CMakeFiles/song.dir/Playlist/song.cpp.o.provides.build: CMakeFiles/song.dir/Playlist/song.cpp.o


# Object files for target song
song_OBJECTS = \
"CMakeFiles/song.dir/Playlist/song.cpp.o"

# External object files for target song
song_EXTERNAL_OBJECTS =

song: CMakeFiles/song.dir/Playlist/song.cpp.o
song: CMakeFiles/song.dir/build.make
song: CMakeFiles/song.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable song"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/song.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/song.dir/build: song

.PHONY : CMakeFiles/song.dir/build

CMakeFiles/song.dir/requires: CMakeFiles/song.dir/Playlist/song.cpp.o.requires

.PHONY : CMakeFiles/song.dir/requires

CMakeFiles/song.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/song.dir/cmake_clean.cmake
.PHONY : CMakeFiles/song.dir/clean

CMakeFiles/song.dir/depend:
	cd /Users/fulluser/CLionProjects/COP3330/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fulluser/CLionProjects/COP3330 /Users/fulluser/CLionProjects/COP3330 /Users/fulluser/CLionProjects/COP3330/cmake-build-debug /Users/fulluser/CLionProjects/COP3330/cmake-build-debug /Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles/song.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/song.dir/depend
