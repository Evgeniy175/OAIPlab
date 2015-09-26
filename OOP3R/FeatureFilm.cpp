#include "stdafx.h"
#include "featureFilm.h"

featureFilm::featureFilm() : base() {}
featureFilm::featureFilm(char* name, char* time, char* other) : base(name, time)
{
	this->other_ = other;
}

char* featureFilm::getName() const
{
	return this->name_;
};

char* featureFilm::getTime() const
{
	return this->time_;
};

char* featureFilm::getOther()
{
	return this->other_;
};

void featureFilm::setTime(char* TIME)
{
	this->time_ = TIME;
};

void featureFilm::setName(char* NAME)
{
	this->name_ = NAME;
};

void featureFilm::setOther(char* OTHER)
{
	this->other_ = OTHER;
};