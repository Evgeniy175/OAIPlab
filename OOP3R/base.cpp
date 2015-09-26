#include "stdafx.h"
#include "base.h"

base::base() {}

base::base(char* name, char* time)
{
	this->name_ = name;
	this->time_ = time;
}

base::~base() {}