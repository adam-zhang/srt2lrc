#ifndef __PATH__H
#define __PATH__H

#include <string>

template<typename charT>
class Path
{
public:
	Path(const std::basic_string<charT>& path)
		: path_(path)
	{ }
	Path(const Path&);
	~Path();
public:
	Path& operator=(const Path&);

	template<typename T>
	friend bool operator==(const Path<T>&, const Path<T>&);
private:
	std::basic_string<charT> path_;
public:
	std::basic_string<charT> getPathWithoutFileName();
	std::basic_string<charT> getFileName();
};

template<typename charT>
bool operator==(const Path<charT>& left, const Path<charT>& right)
{
	return left.path_ == right.path_;
}

template<typename charT>
bool operator!=(const Path<charT>& left, const Path<charT>& right)
{
	return !(left == right);
}

#endif//__PATH__H
