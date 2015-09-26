#include "stdafx.h"
#include "producer.h"

producer::producer() : base() {}
producer::producer(char* name, char* time) : base(name, time) {}

void producer::setName(char* name)
{
	this->name_ = name;
};

void producer::setTime(char* time)
{
	this->time_ = time;
};

char* producer::getName() const
{
	return this->name_;
};

char* producer::getTime() const
{
	return this->time_;
};