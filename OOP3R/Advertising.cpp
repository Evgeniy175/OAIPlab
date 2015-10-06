#include "stdafx.h"
#include "advertising.h"

advertising::advertising() : base()
{
	this->progType = programType::ADVERTISING;
}

advertising::advertising(char* name, char* other, date* newDate) : base(name, other, newDate)
{
	this->progType = programType::ADVERTISING;
}

date* advertising::getDate() const
{
	return this->date_;
}

char* advertising::getName() const
{
	return this->name_;
};

char* advertising::getOther() const
{
	return this->other_;
};

void advertising::setName(char* name)
{
	this->name_ = name;
};

void advertising::setDate(date* newDate)
{
	this->date_ = newDate;
};

void advertising::setOther(char* other)
{
	this->other_ = other;
};