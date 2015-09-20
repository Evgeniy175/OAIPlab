#include "stdafx.h"
#include "News.h"

News::News() {};

News::News(char* name_, char* time_, char* other_) : Cartoon(name_, time_, other_) {};

void News::setNews(char* name_, char* time_, char* other_)
{
	setName(name_);
	setTime(time_);
	setOther(other_);
};

char* News::getNews()
{
	return name;
};

char* News::getTime()
{
	return time;
};