#include "stdafx.h"
#include "controller.h"

void controller::showList(std::list<base*> programList)
{
	for (std::list<base*>::iterator it = programList.begin(); it != programList.end(); it++)
	{
		if ((*it)->getDate() != NULL)
			(*it)->getDate()->showDate();

		std::cout << (*it)->getName() << "   ";

		if ((*it)->getOther() != NULL) std::cout << (*it)->getOther() << "   ";

		std::cout << std::endl;
	};
};

std::list<base*> controller::searchFilmInYear(std::list<base*> programList, int searchYear)
{
	std::list<base*> rc;

	std::cout << std::endl << "Films, producted in " << searchYear << ':' << std::endl;

	for (std::list<base*>::iterator it = programList.begin(); it != programList.end(); it++)
	{
		if ((*it)->getDate() != NULL)
		{
			if ((*it)->getDate()->year_ == searchYear)
			{
				rc.push_back(*it);
			};
		};
	};

	return rc;
};

int controller::numberOfAdv(std::list<base*> programList)
{
	int rc = 0;

	for (std::list<base*>::iterator it = programList.begin(); it != programList.end(); it++)
	{
		if ((*it)->getType() == programType::ADVERTISING)	rc++;
	};

	return rc;
};

programTime* controller::getDuration(std::list<base*> programList)
{
	std::list<base*>::iterator firstIt = programList.begin();
	std::list<base*>::iterator secondIt = programList.end();
	
	firstIt++;
	secondIt--;

	programTime* firstVar = (*firstIt)->getDate()->time_;
	programTime* secondVar = (*secondIt)->getDate()->time_;
	
	std::cout << "Продолжительность программы:" << std::endl;

	std::cout << ((programTime*)(*firstVar - *secondVar))->hours_ << ':' << ((programTime*)(*firstVar - *secondVar))->minutes_ << std::endl;

	return *firstVar - *secondVar;
};