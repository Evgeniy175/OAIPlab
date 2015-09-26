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

base* base::getHead()
{
	return this->head;
};

base::~base()
{
	delete next;
	delete head;	
}