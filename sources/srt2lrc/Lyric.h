/********************************************************************************
> FileName:	Lyric.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Sun Apr  5 19:50:44 2026
********************************************************************************/
#ifndef LYRIC_H
#define LYRIC_H

#include <chrono>
#include <string>

class Lyric
{
public:
	Lyric();
	~Lyric();
private:
	std::chrono::system_clock time_;
	std::string content_;
public:
	const std::chrono::system_clock time()
	{ return time_;}
	void setTime(const std::chrono::system_clock& time)
	{ time_ = time;}

};
#endif//LYRIC_H
