#include "stdafx.h"
#include "tv.h"

tv::tv() : base() {}
tv::tv(char* name, char* time) : base(name, time) {}

char* tv::getTime() const
{
	return this->time_;
};

char* tv::getName() const
{
	return this->name_;
};

void tv::setName(char* name)
{
	this->name_ = name;
};

void tv::setTime(char* time)
{
	this->time_ = time;
};