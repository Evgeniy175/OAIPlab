#include "stdafx.h"
#include "tv.h"

base* base::head = NULL;

tv::tv() : base()
{
	this->progType = programType::TV;
}

tv::tv(char* name, date* newDate)
{
	if (this->head == NULL)
	{
		this->head = this;
		this->name_ = name;
		this->date_ = newDate;
		this->other_ = NULL;
		programList.push_back(this);
	}
	else
	{
		tv::addElement(this);
	};

	this->progType = programType::TV;
}

date* tv::getDate() const
{
	return this->date_;
};

char* tv::getName() const
{
	return this->name_;
};

char* tv::getOther() const
{
	return this->other_;
};

void tv::setName(char* name)
{
	this->name_ = name;
};

void tv::setDate(date* newDate)
{
	this->date_ = newDate;
};

void tv::setOther(char* other)
{
	this->other_ = other;
};

void tv::addElement(base* element)
{
	programList.push_back(element);
};

void tv::addElements(int nElements, base* element, ...)
{
	for (int i = 0; i < nElements; i++)
	{
		programList.push_back(*(&element + i));
	};
};

std::list<base*> tv::getList()
{
	return this->programList;
};