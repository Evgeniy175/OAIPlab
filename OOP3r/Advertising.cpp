#include "stdafx.h"
#include "Advertising.h"

Advertising::Advertising() { };

Advertising::Advertising(char* line_)
{
	this->line = line_;
};

char* Advertising::getLine()
{
	return this->line;
};

void Advertising::setLine(char* line_)
{
	this->line = line_;
};

Advertising::~Advertising()
{
	line = NULL;
};