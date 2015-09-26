#include "stdafx.h"
#include "producer.h"

producer::producer() : base() {}
producer::producer(char* name, char* time, char* other) : base(name, time, other) {}

void producer::setName(char* name)
{
	this->name_ = name;
};

void producer::setTime(char* time)
{
	this->time_ = time;
};

void producer::setOther(char* other)
{
	this->other_ = other;
};

char* producer::getName() const
{
	return this->name_;
};

char* producer::getTime() const
{
	return this->time_;
};

char* producer::getOther() const
{
	return this->other_;
};