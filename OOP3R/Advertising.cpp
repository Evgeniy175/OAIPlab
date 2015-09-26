#include "stdafx.h"
#include "advertising.h"

advertising::advertising() : base() {}
advertising::advertising(char* name, char* time, char* other) : base(name, time, other) {}

char* advertising::getTime() const
{
	return this->time_;
}

char* advertising::getName() const
{
	return this->name_;
};

char* advertising::getOther() const
{
	return this->other_;
};

void advertising::setName(char* name)
{
	this->name_ = name;
};

void advertising::setTime(char* time)
{
	this->time_ = time;
};

void advertising::setOther(char* other)
{
	this->other_ = other;
};