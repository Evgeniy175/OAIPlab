#include "stdafx.h"
#include "news.h"

news::news() : base() {}
news::news(char* name, char* time) : base(name, time) {}

void news::setName(char* name)
{
	this->name_ = name;
};

void news::setTime(char* time)
{
	this->time_ = time;
};

char* news::getName() const
{
	return this->name_;
};

char* news::getTime() const
{
	return this->time_;
};