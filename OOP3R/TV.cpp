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
		programController = new controller;
		this->head = this;
		this->name_ = name;
		this->date_ = newDate;
		this->other_ = NULL;
		programController->addNew(this);
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
	programController->addNew(element);
};

void tv::addElements(int nElements, base* element, ...)
{
	for (int i = 0; i < nElements; i++)
	{
		programController->addNew(*(&element + i));
	};
};

void tv::show()
{
	programController->showList();
};

int tv::showNumberOfAdv()
{
	return programController->numberOfAdv();
};

void tv::searchFilmInYear(int year)
{
	std::list<base*> temp = programController->searchFilmInYear(year);

	for (std::list<base*>::iterator it = temp.begin(); it != temp.end(); it++)
	{
		if ((*it)->date_->time_->hours_ / 10 == NULL)	std::cout << '0';
		std::cout << (*it)->date_->time_->hours_ << ':';

		if ((*it)->date_->time_->minutes_ / 10 == NULL)	std::cout << '0';
		std::cout << (*it)->date_->time_->minutes_ << "   ";

		std::cout << (*it)->date_->year_ << "   " << (*it)->name_ << "   " << (*it)->other_ << std::endl;
	};
};

void tv::programDuration()
{
	programTime* temp = programController->getDuration();

	std::cout << "Продолжительность программы:" << std::endl;
	std::cout << temp->hours_ << ':' << temp->minutes_ << std::endl;

	delete temp;
};