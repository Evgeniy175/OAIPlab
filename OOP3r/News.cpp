#include "stdafx.h"
#include "News.h"

News::News() { };

News::News(char* line_)
{
	this->line = line_;
};

void News::setNews(char* line_)
{
	this->line = line_;
};

char* News::getNews()
{
	return this->line;
};