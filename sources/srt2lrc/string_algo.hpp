#ifndef __STRING__ALGO
#define __STRING__ALGO

#include <string>
#include <algorithm>

std::string ltrim(std::string& str)
{
	std::string::iterator i = find_if(str.begin(), str.end(), std::not1(std::ptr_fun(isspace)));
	str.erase(str.begin(), i);
	return str;
}

std::string rtrim(std::string& str)
{
	//str.erase(std::find_if(str.rbegin(), str.rend(), 
	//			std::not1(std::ptr_fun(::isspace))).base(),
	//		str.end());
	std::string::iterator i = find_if(str.rbegin(), str.rend(), std::not1(std::ptr_fun(isspace))).base();
	str.erase(i, str.end());
	return str;
}

std::string trim(std::string& str)
{
	std::string ss = ltrim(str);
	return rtrim(ss);
}

#endif//__STRING__ALGO

