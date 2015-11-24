#ifndef __STRING__ALGO
#define __STRING__ALGO

#include <string>
#include <algorithm>

template<typename charT>
std::basic_string<charT> ltrim(std::basic_string<charT>& str)
{
	str.erase(str.begin(),
			std::find_if(str.begin(), str.end(), 
				std::not1(std::ptr_fun(isspace))));
	return str;
}

template<typename charT>
std::basic_string<charT> rtrim(std::basic_string<charT>& str)
{
	str.erase(std::find_if(str.rbegin(), str.rend(), 
				std::not1(std::ptr_fun(::isspace))).base(),
			str.end());
	return str;
}

template<typename charT>
std::basic_string<charT> trim(std::basic_string<charT>& str)
{
	std::string ss = ltrim(str);
	return rtrim(ss);
}

#endif//__STRING__ALGO

