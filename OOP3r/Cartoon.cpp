#include "stdafx.h"
#include "Cartoon.h"

Cartoon::Cartoon() { };

Cartoon::Cartoon(char* name_, char* date_)
{
	this->date = date_;
	this->cartoonName = name_;
};

char* Cartoon::getDate()
{
	return this->date;
};

char* Cartoon::getName()
{
	return this->cartoonName;
};

void Cartoon::setDate(char* date_)
{
	this->date = date_;
};

void Cartoon::setName(char* name_)
{
	this->cartoonName = name_;
};

Cartoon::~Cartoon()
{
	cartoonName = NULL;
	date = NULL;
};