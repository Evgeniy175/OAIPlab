#include "stdafx.h"
#include "cartoon.h"

cartoon::cartoon() : base() {}
cartoon::cartoon(char* name, char* time) : base() {}

char* cartoon::getTime() const
{
	return this->time_;
};

char* cartoon::getName() const
{
	return this->name_;
};

void cartoon::setTime(char* time)
{
	this->time_ = time;
};

void cartoon::setName(char* name)
{
	this->name_ = name;
};