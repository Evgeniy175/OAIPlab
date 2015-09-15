#include "stdafx.h"
#include "Producer.h"

Producer::Producer()
{
	this->personName = NULL;
};

Producer::Producer(char* name_)
{
	this->personName = name_;
};

void Producer::setName(char* name_)
{
	this->personName = name_;
};

char* Producer::getName()
{
	return this->personName;
};