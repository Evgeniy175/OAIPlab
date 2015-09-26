#include "stdafx.h"
#include "film.h"

film::film() : base() {}
film::film(char* name, char* time, char* other) : base(name, time)
{
	this->other_ = other;
}

void film::setName(char* name)
{
	this->name_ = name;
};

void film::setTime(char* time)
{
	this->time_ = time;
};

void film::setOther(char* other)
{
	this->other_ = other;
};

char* film::getName() const
{
	return this->name_;
};

char* film::getTime() const
{
	return this->time_;
};

char* film::getOther()
{
	return this->other_;
};