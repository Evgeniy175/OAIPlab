#include "stdafx.h"
#include "base.h"

programTime::programTime()
{

}

programTime::programTime(int hours, int minutes)
{
	this->hours_ = hours;
	this->minutes_ = minutes;
}

date::date()
{

}

date::date(int day, int month, int year, programTime* time)
{
	this->year_ = year;
	this->month_ = month;
	this->day_ = day;
	this->time_ = time;
}

void date::showDate()
{
	if (this->year_ != NULL  && this->month_ != NULL && this->day_ != NULL)
	{
		if (this->day_ / 10 == NULL)	std::cout << '0' << this->day_ << '.';
		else	std::cout << this->day_ << '.';

		if (this->month_ / 10 == NULL) std::cout << '0' << this->month_ << '.';
		else	std::cout << this->month_ << '.';
 
		std::cout << this->year_ << "   ";
	}

	if (this->time_ != NULL)
	{
		if (this->time_->hours_ / 10 == NULL)	std::cout << '0' << this->time_->hours_ << ':';
		else	std::cout << this->time_->hours_ << ':';

		if (this->time_->minutes_ / 10 == NULL)	std::cout << '0' << this->time_->minutes_ << "   ";
		else	std::cout << this->time_->minutes_ << "   ";
	};
};

base::base()
{
	this->name_ = NULL;
	this->other_ = NULL;
	this->date_ = NULL;
	this->head = NULL;
}

base::base(char* name, char* other)
{
	this->name_ = name;
	this->other_ = other;
	this->date_= NULL;
}

base::base(char* name, char* other, date* newDate)
{
	this->name_ = name;
	this->date_ = newDate;
	this->other_ = other;
}


void base::setCurrent(base* curr)
{
	this->name_ = curr->name_;
	this->date_ = curr->date_;
	this->other_ = curr->other_;
};

base::~base()
{
	delete head;	
}