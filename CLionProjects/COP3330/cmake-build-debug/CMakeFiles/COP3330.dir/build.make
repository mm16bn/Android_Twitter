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
include CMakeFiles/COP3330.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/COP3330.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/COP3330.dir/flags.make

CMakeFiles/COP3330.dir/Diamonds/main.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/Diamonds/main.cpp.o: ../Diamonds/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/COP3330.dir/Diamonds/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/Diamonds/main.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Diamonds/main.cpp

CMakeFiles/COP3330.dir/Diamonds/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/Diamonds/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Diamonds/main.cpp > CMakeFiles/COP3330.dir/Diamonds/main.cpp.i

CMakeFiles/COP3330.dir/Diamonds/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/Diamonds/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Diamonds/main.cpp -o CMakeFiles/COP3330.dir/Diamonds/main.cpp.s

CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.requires

CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.provides: CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.provides

CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.provides.build: CMakeFiles/COP3330.dir/Diamonds/main.cpp.o


CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o: ../Diamonds/diamond.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Diamonds/diamond.cpp

CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Diamonds/diamond.cpp > CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.i

CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Diamonds/diamond.cpp -o CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.s

CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.requires

CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.provides: CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.provides

CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.provides.build: CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o


CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o: ../temperature/Temperature.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o -c /Users/fulluser/CLionProjects/COP3330/temperature/Temperature.cpp

CMakeFiles/COP3330.dir/temperature/Temperature.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/temperature/Temperature.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/temperature/Temperature.cpp > CMakeFiles/COP3330.dir/temperature/Temperature.cpp.i

CMakeFiles/COP3330.dir/temperature/Temperature.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/temperature/Temperature.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/temperature/Temperature.cpp -o CMakeFiles/COP3330.dir/temperature/Temperature.cpp.s

CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.requires

CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.provides: CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.provides

CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.provides.build: CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o


CMakeFiles/COP3330.dir/temperature/main.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/temperature/main.cpp.o: ../temperature/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/COP3330.dir/temperature/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/temperature/main.cpp.o -c /Users/fulluser/CLionProjects/COP3330/temperature/main.cpp

CMakeFiles/COP3330.dir/temperature/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/temperature/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/temperature/main.cpp > CMakeFiles/COP3330.dir/temperature/main.cpp.i

CMakeFiles/COP3330.dir/temperature/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/temperature/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/temperature/main.cpp -o CMakeFiles/COP3330.dir/temperature/main.cpp.s

CMakeFiles/COP3330.dir/temperature/main.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/temperature/main.cpp.o.requires

CMakeFiles/COP3330.dir/temperature/main.cpp.o.provides: CMakeFiles/COP3330.dir/temperature/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/temperature/main.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/temperature/main.cpp.o.provides

CMakeFiles/COP3330.dir/temperature/main.cpp.o.provides.build: CMakeFiles/COP3330.dir/temperature/main.cpp.o


CMakeFiles/COP3330.dir/distance/distance.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/distance/distance.cpp.o: ../distance/distance.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/COP3330.dir/distance/distance.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/distance/distance.cpp.o -c /Users/fulluser/CLionProjects/COP3330/distance/distance.cpp

CMakeFiles/COP3330.dir/distance/distance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/distance/distance.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/distance/distance.cpp > CMakeFiles/COP3330.dir/distance/distance.cpp.i

CMakeFiles/COP3330.dir/distance/distance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/distance/distance.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/distance/distance.cpp -o CMakeFiles/COP3330.dir/distance/distance.cpp.s

CMakeFiles/COP3330.dir/distance/distance.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/distance/distance.cpp.o.requires

CMakeFiles/COP3330.dir/distance/distance.cpp.o.provides: CMakeFiles/COP3330.dir/distance/distance.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/distance/distance.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/distance/distance.cpp.o.provides

CMakeFiles/COP3330.dir/distance/distance.cpp.o.provides.build: CMakeFiles/COP3330.dir/distance/distance.cpp.o


CMakeFiles/COP3330.dir/distance/main.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/distance/main.cpp.o: ../distance/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/COP3330.dir/distance/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/distance/main.cpp.o -c /Users/fulluser/CLionProjects/COP3330/distance/main.cpp

CMakeFiles/COP3330.dir/distance/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/distance/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/distance/main.cpp > CMakeFiles/COP3330.dir/distance/main.cpp.i

CMakeFiles/COP3330.dir/distance/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/distance/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/distance/main.cpp -o CMakeFiles/COP3330.dir/distance/main.cpp.s

CMakeFiles/COP3330.dir/distance/main.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/distance/main.cpp.o.requires

CMakeFiles/COP3330.dir/distance/main.cpp.o.provides: CMakeFiles/COP3330.dir/distance/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/distance/main.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/distance/main.cpp.o.provides

CMakeFiles/COP3330.dir/distance/main.cpp.o.provides.build: CMakeFiles/COP3330.dir/distance/main.cpp.o


CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o: ../Playlist/playlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Playlist/playlist.cpp

CMakeFiles/COP3330.dir/Playlist/playlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/Playlist/playlist.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Playlist/playlist.cpp > CMakeFiles/COP3330.dir/Playlist/playlist.cpp.i

CMakeFiles/COP3330.dir/Playlist/playlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/Playlist/playlist.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Playlist/playlist.cpp -o CMakeFiles/COP3330.dir/Playlist/playlist.cpp.s

CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.requires

CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.provides: CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.provides

CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.provides.build: CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o


CMakeFiles/COP3330.dir/Playlist/song.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/Playlist/song.cpp.o: ../Playlist/song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/COP3330.dir/Playlist/song.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/Playlist/song.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Playlist/song.cpp

CMakeFiles/COP3330.dir/Playlist/song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/Playlist/song.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Playlist/song.cpp > CMakeFiles/COP3330.dir/Playlist/song.cpp.i

CMakeFiles/COP3330.dir/Playlist/song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/Playlist/song.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Playlist/song.cpp -o CMakeFiles/COP3330.dir/Playlist/song.cpp.s

CMakeFiles/COP3330.dir/Playlist/song.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/Playlist/song.cpp.o.requires

CMakeFiles/COP3330.dir/Playlist/song.cpp.o.provides: CMakeFiles/COP3330.dir/Playlist/song.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/Playlist/song.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/Playlist/song.cpp.o.provides

CMakeFiles/COP3330.dir/Playlist/song.cpp.o.provides.build: CMakeFiles/COP3330.dir/Playlist/song.cpp.o


CMakeFiles/COP3330.dir/Playlist/menu.cpp.o: CMakeFiles/COP3330.dir/flags.make
CMakeFiles/COP3330.dir/Playlist/menu.cpp.o: ../Playlist/menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/COP3330.dir/Playlist/menu.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COP3330.dir/Playlist/menu.cpp.o -c /Users/fulluser/CLionProjects/COP3330/Playlist/menu.cpp

CMakeFiles/COP3330.dir/Playlist/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COP3330.dir/Playlist/menu.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fulluser/CLionProjects/COP3330/Playlist/menu.cpp > CMakeFiles/COP3330.dir/Playlist/menu.cpp.i

CMakeFiles/COP3330.dir/Playlist/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COP3330.dir/Playlist/menu.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fulluser/CLionProjects/COP3330/Playlist/menu.cpp -o CMakeFiles/COP3330.dir/Playlist/menu.cpp.s

CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.requires:

.PHONY : CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.requires

CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.provides: CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/COP3330.dir/build.make CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.provides.build
.PHONY : CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.provides

CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.provides.build: CMakeFiles/COP3330.dir/Playlist/menu.cpp.o


# Object files for target COP3330
COP3330_OBJECTS = \
"CMakeFiles/COP3330.dir/Diamonds/main.cpp.o" \
"CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o" \
"CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o" \
"CMakeFiles/COP3330.dir/temperature/main.cpp.o" \
"CMakeFiles/COP3330.dir/distance/distance.cpp.o" \
"CMakeFiles/COP3330.dir/distance/main.cpp.o" \
"CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o" \
"CMakeFiles/COP3330.dir/Playlist/song.cpp.o" \
"CMakeFiles/COP3330.dir/Playlist/menu.cpp.o"

# External object files for target COP3330
COP3330_EXTERNAL_OBJECTS =

COP3330: CMakeFiles/COP3330.dir/Diamonds/main.cpp.o
COP3330: CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o
COP3330: CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o
COP3330: CMakeFiles/COP3330.dir/temperature/main.cpp.o
COP3330: CMakeFiles/COP3330.dir/distance/distance.cpp.o
COP3330: CMakeFiles/COP3330.dir/distance/main.cpp.o
COP3330: CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o
COP3330: CMakeFiles/COP3330.dir/Playlist/song.cpp.o
COP3330: CMakeFiles/COP3330.dir/Playlist/menu.cpp.o
COP3330: CMakeFiles/COP3330.dir/build.make
COP3330: CMakeFiles/COP3330.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable COP3330"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/COP3330.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/COP3330.dir/build: COP3330

.PHONY : CMakeFiles/COP3330.dir/build

CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/Diamonds/main.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/Diamonds/diamond.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/temperature/Temperature.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/temperature/main.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/distance/distance.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/distance/main.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/Playlist/playlist.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/Playlist/song.cpp.o.requires
CMakeFiles/COP3330.dir/requires: CMakeFiles/COP3330.dir/Playlist/menu.cpp.o.requires

.PHONY : CMakeFiles/COP3330.dir/requires

CMakeFiles/COP3330.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/COP3330.dir/cmake_clean.cmake
.PHONY : CMakeFiles/COP3330.dir/clean

CMakeFiles/COP3330.dir/depend:
	cd /Users/fulluser/CLionProjects/COP3330/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fulluser/CLionProjects/COP3330 /Users/fulluser/CLionProjects/COP3330 /Users/fulluser/CLionProjects/COP3330/cmake-build-debug /Users/fulluser/CLionProjects/COP3330/cmake-build-debug /Users/fulluser/CLionProjects/COP3330/cmake-build-debug/CMakeFiles/COP3330.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/COP3330.dir/depend

