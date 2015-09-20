#include "stdafx.h"
#include "Cartoon.h"

Cartoon::Cartoon() {};

Cartoon::Cartoon(char* name_, char* time_, char* other_)
{
	time = time_;
	name = name_;
	other = other_;
};

char* Cartoon::getTime()
{
	return time;
};

char* Cartoon::getName()
{
	return name;
};

char* Cartoon::getOther()
{
	return other;
};

void Cartoon::setTime(char* time_)
{
	time = time_;
};

void Cartoon::setName(char* name_)
{
	name = name_;
};

void Cartoon::setOther(char* other_)
{
	other = other_;
};