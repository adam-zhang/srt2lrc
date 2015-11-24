cmake_minimum_required(VERSION 2.8)
project(srt2lrc)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-std=c++11")
set (src
	appMain.cpp
	Dialogue.cpp
	Analyzer.cpp
	Path.cpp
	)
set (headers
	Dialogue.h
	Analyzer.h
	string_algo.hpp
	Path.h
	)
add_executable(srt2lrc ${src} ${headers})
