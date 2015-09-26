#include "stdafx.h"
#include "cartoon.h"

cartoon::cartoon() : base() {}
cartoon::cartoon(char* name, char* time, char* other) : base(name, time, other) {}

char* cartoon::getTime() const
{
	return this->time_;
};

char* cartoon::getName() const
{
	return this->name_;
};

char* cartoon::getOther() const
{
	return this->other_;
};

void cartoon::setTime(char* time)
{
	this->time_ = time;
};

void cartoon::setName(char* name)
{
	this->name_ = name;
};

void cartoon::setOther(char* other)
{
	this->other_ = other;
};