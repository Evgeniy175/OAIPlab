#include "stdafx.h"
#include "Advertising.h"

Advertising::Advertising() {};

Advertising::Advertising(char* name_, char* time_, char* other_) : Cartoon(name_, time_, other_) {};

char* Advertising::getTime()
{
	return time;
}

char* Advertising::getLine()
{
	return name;
};

void Advertising::setLine(char* name_, char* time_, char* other_)
{
	setTime(time_);
	setName(name_);
	setOther(other_);
};