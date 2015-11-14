cmake_minimum_required(VERSION 2.8)
project(srt2lrc)
set (src
	appMain.cpp
	Dialogue.cpp
	Analyzer.cpp
	)
set (headers
	Dialogue.h
	Analyzer.h
	)
add_executable(srt2lrc ${src} ${headers})
