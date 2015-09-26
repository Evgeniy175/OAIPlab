#include "stdafx.h"
#include "advertising.h"

advertising::advertising() : base() {}
advertising::advertising(char* name, char* time) : base(name, time) {}

char* advertising::getTime() const
{
	return this->time_;
}

char* advertising::getName() const
{
	return this->name_;
};

void advertising::setName(char* name)
{
	this->name_ = name;
};

void advertising::setTime(char* time)
{
	this->time_ = time;
};