#include "stdafx.h"
#include "TV.h"

TV::TV() {};

TV::TV(int size_, Cartoon firstVar, ...)
{
	Cartoon* temp = &firstVar;

	size = size_;
	arrOfTVprogram = new Cartoon[size];

	for (int i = 0; i < size; i++)
	{
		arrOfTVprogram[i] = *(temp + i);
	};
};

void TV::showTVprogram()
{
	std::cout << "---Current TV Program---" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "   " << getTVtime(i) << "   " << getThisTV(i);
		if (getOtherTV(i) != 0x00) std::cout << ", " << getOtherTV(i);
		std::cout << std::endl;
	};
};

char* TV::getTVtime(int i)
{
	return arrOfTVprogram[i].getTime();
};

char* TV::getThisTV(int i)
{
	return arrOfTVprogram[i].getName();
};

char* TV::getOtherTV(int i)
{
	return arrOfTVprogram[i].getOther();
};