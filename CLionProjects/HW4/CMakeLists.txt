cmake_minimum_required(VERSION 3.9)
project(HW4)

set(CMAKE_CXX_STANDARD 11)

add_library(cmake-build-debug/song.cpp cmake-build-debug/song.h cmake-build-debug/playlist.cpp cmake-build-debug/playlist.h cmake-build-debug/menu.cpp)