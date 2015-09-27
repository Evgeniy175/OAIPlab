#include "stdafx.h"
#include "base.h"

base::base()
{
	this->name_ = NULL;
	this->time_ = NULL;
	this->head = NULL;
	this->next = NULL;
}

base::base(char* name, char* time, char* other)
{
	this->name_ = name;
	this->time_ = time;
	this->other_ = other;
}

base* base::getNext()
{
	return this->next;
};

void base::setNext(base* newNext)
{
	this->next = newNext;
};

void base::setCurrent(base* curr)
{
	this->name_ = curr->name_;
	this->time_ = curr->time_;
	this->other_ = curr->other_;
};

base::~base()
{
	delete next;
	delete head;	
}