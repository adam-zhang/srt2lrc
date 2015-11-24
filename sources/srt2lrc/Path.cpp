#include "Path.h"
#include <string>

using namespace std;

//Path::Path(const basic_string<charT>& path)
//	: path_(path)
//{
//}
//

template<typename charT>
Path<charT>::Path(const Path<charT>& another)
	: path_(another.path_)
{
}

template<typename charT>
Path<charT>& Path<charT>::operator=(const Path<charT>& another)
{
	path_ = another.paht_;
	return *this;
}

template<typename charT>
Path<charT>::~Path() {}

template<typename charT>
basic_string<charT> Path<charT>::getPathWithoutFileName()
{
	return path_.substr(0, path_.rfind("/"));
}

template<typename charT>
basic_string<charT> Path<charT>::getFileName()
{
	return path_.substr(path_.rfind("/"));
}
