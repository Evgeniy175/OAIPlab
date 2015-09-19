#include "stdafx.h"
#include "Producer.h"

Producer::Producer() {};

Producer::Producer(char* name_, char* time_, char* other_) : Cartoon(name_, time_, other_) {};

void Producer::setProducer(char* name_, char* time_, char* other_)
{
	setName(name_);
	setTime(time_);
};

char* Producer::getName()
{
	return name;
};

char* Producer::getDate()
{
	return time;
};