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
include CMakeFiles/playlist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/playlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/playlist.dir/flags.make

CMakeFiles/playlist.dir/Playlist/playlist.cpp.o: CMakeFiles/playlist.dir/flags.make
CMakeFiles/playlist.dir/Playlist/playlist.cpp.o: ../Playlist/playlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/playlist.dir/Playlist/playlist.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/playlist.dir/Playlist/playlist.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Playlist/playlist.cpp

CMakeFiles/playlist.dir/Playlist/playlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/playlist.dir/Playlist/playlist.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Playlist/playlist.cpp > CMakeFiles/playlist.dir/Playlist/playlist.cpp.i

CMakeFiles/playlist.dir/Playlist/playlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/playlist.dir/Playlist/playlist.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Playlist/playlist.cpp -o CMakeFiles/playlist.dir/Playlist/playlist.cpp.s

CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.requires:

.PHONY : CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.requires

CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.provides: CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.requires
	$(MAKE) -f CMakeFiles/playlist.dir/build.make CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.provides.build
.PHONY : CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.provides

CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.provides.build: CMakeFiles/playlist.dir/Playlist/playlist.cpp.o


# Object files for target playlist
playlist_OBJECTS = \
"CMakeFiles/playlist.dir/Playlist/playlist.cpp.o"

# External object files for target playlist
playlist_EXTERNAL_OBJECTS =

playlist: CMakeFiles/playlist.dir/Playlist/playlist.cpp.o
playlist: CMakeFiles/playlist.dir/build.make
playlist: CMakeFiles/playlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable playlist"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/playlist.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/playlist.dir/build: playlist

.PHONY : CMakeFiles/playlist.dir/build

CMakeFiles/playlist.dir/requires: CMakeFiles/playlist.dir/Playlist/playlist.cpp.o.requires

.PHONY : CMakeFiles/playlist.dir/requires

CMakeFiles/playlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/playlist.dir/cmake_clean.cmake
.PHONY : CMakeFiles/playlist.dir/clean

CMakeFiles/playlist.dir/depend:
	cd /Users/fulluser/CLionProjects/COP3330/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fulluser/CLionProjects/COP3330 /Users/fulluser/CLionProjects/COP3330 /Users/fulluser/CLionProjects/COP3330/cmake-build-debug /Users/fulluser/CLionProjects/COP3330/cmake-build-debug /Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles/playlist.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/playlist.dir/depend

