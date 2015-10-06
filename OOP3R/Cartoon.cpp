#include "stdafx.h"
#include "cartoon.h"

cartoon::cartoon() : base()
{
	this->progType = programType::CARTOON;
}

cartoon::cartoon(char* name, char* other, date* newDate) : base(name, other, newDate)
{
	this->progType = programType::CARTOON;
}

date* cartoon::getDate() const
{
	return this->date_;
};

char* cartoon::getName() const
{
	return this->name_;
};

char* cartoon::getOther() const
{
	return this->other_;
};

void cartoon::setDate(date* newDate)
{
	this->date_ = newDate;
};

void cartoon::setName(char* name)
{
	this->name_ = name;
};

void cartoon::setOther(char* other)
{
	this->other_ = other;
};