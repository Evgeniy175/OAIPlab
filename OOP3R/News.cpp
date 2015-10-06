#include "stdafx.h"
#include "news.h"

news::news() : base()
{
	this->progType = programType::NEWS;
}

news::news(char* name, char* other, date* newDate) : base(name, other, newDate)
{
	this->progType = programType::NEWS;
}

void news::setName(char* name)
{
	this->name_ = name;
};

void news::setDate(date* newDate)
{
	this->date_ = newDate;
};

void news::setOther(char* other)
{
	this->other_ = other;
};

char* news::getName() const
{
	return this->name_;
};

date* news::getDate() const
{
	return this->date_;
};

char* news::getOther() const
{
	return this->other_;
};