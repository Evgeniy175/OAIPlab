#include "stdafx.h"
#include "featureFilm.h"

featureFilm::featureFilm() : base() {}
featureFilm::featureFilm(char* name, char* time, char* other) : base(name, time, other) {}

char* featureFilm::getName() const
{
	return this->name_;
};

char* featureFilm::getTime() const
{
	return this->time_;
};

char* featureFilm::getOther() const
{
	return this->other_;
};

void featureFilm::setTime(char* time)
{
	this->time_ = time;
};

void featureFilm::setName(char* name)
{
	this->name_ = name;
};

void featureFilm::setOther(char* other)
{
	this->other_ = other;
};