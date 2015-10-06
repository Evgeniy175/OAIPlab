#include "stdafx.h"
#include "featureFilm.h"

featureFilm::featureFilm() : base()
{
	this->progType = programType::FEATUREFILM;
}

featureFilm::featureFilm(char* name, char* other, date* newDate) : base(name, other, newDate)
{
	this->progType = programType::FEATUREFILM;
}

char* featureFilm::getName() const
{
	return this->name_;
};

date* featureFilm::getDate() const
{
	return this->date_;
};

char* featureFilm::getOther() const
{
	return this->other_;
};

void featureFilm::setDate(date* newDate)
{
	this->date_ = new date;
};

void featureFilm::setName(char* name)
{
	this->name_ = name;
};

void featureFilm::setOther(char* other)
{
	this->other_ = other;
};