cmake_minimum_required(VERSION 3.9)
project(COP3330)

set(CMAKE_CXX_STANDARD 11)

add_executable(COP3330 Diamonds/main.cpp Diamonds/diamond.h Diamonds/diamond.cpp temperature/Temperature.cpp temperature/Temperature.h temperature/main.cpp distance/distance.cpp distance/distance.h distance/main.cpp distance/main.h Playlist/playlist.cpp Playlist/playlist.h Playlist/song.cpp Playlist/menu.cpp Playlist/song.h)
add_executable(main temperature/main.cpp)

add_executable(distance distance/distance.cpp)
add_executable(song Playlist/song.cpp)
add_executable(menu Playlist/menu.cpp)
add_executable(playlist Playlist/playlist.cpp)
