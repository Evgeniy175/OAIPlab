#include "stdafx.h"
#include "news.h"

news::news() : base() {}
news::news(char* name, char* time, char* other) : base(name, time, other) {}

void news::setName(char* name)
{
	this->name_ = name;
};

void news::setTime(char* time)
{
	this->time_ = time;
};

void news::setOther(char* other)
{
	this->other_ = other;
};

char* news::getName() const
{
	return this->name_;
};

char* news::getTime() const
{
	return this->time_;
};

char* news::getOther() const
{
	return this->other_;
};