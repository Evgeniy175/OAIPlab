#include "stdafx.h"
#include "film.h"

film::film() : base()
{
	this->progType = programType::FILM;
}

film::film(char* name, char* other, date* newDate) : base(name, other, newDate)
{
	this->progType = programType::FILM;
}

void film::setName(char* name)
{
	this->name_ = name;
};

void film::setDate(date* newDate)
{
	this->date_ = newDate;
};

void film::setOther(char* other)
{
	this->other_ = other;
};

char* film::getName() const
{
	return this->name_;
};

date* film::getDate() const
{
	return this->date_;
};

char* film::getOther() const
{
	return this->other_;
};