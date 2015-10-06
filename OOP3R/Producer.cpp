#include "stdafx.h"
#include "producer.h"

producer::producer() : base()
{

}

producer::producer(char* name, char* other, date* newDate) : base(name, other, newDate)
{

}

void producer::setName(char* name)
{
	this->name_ = name;
};

void producer::setDate(date* newDate)
{
	this->date_ = newDate;
};

void producer::setOther(char* other)
{
	this->other_ = other;
};

char* producer::getName() const
{
	return this->name_;
};

date* producer::getDate() const
{
	return this->date_;
};

char* producer::getOther() const
{
	return this->other_;
};