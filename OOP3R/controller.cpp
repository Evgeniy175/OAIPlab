#include "stdafx.h"
#include "controller.h"

void controller::showList()
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

std::list<base*> controller::searchFilmInYear(int searchYear)
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

int controller::numberOfAdv()
{
	int rc = 0;

	for (std::list<base*>::iterator it = programList.begin(); it != programList.end(); it++)
	{
		if ((*it)->getType() == programType::ADVERTISING)	rc++;
	};

	return rc;
};

void controller::addNew(base* element)
{
	programList.push_back(element);
};

programTime* controller::getDuration()
{
	std::list<base*>::iterator firstIt = programList.begin();
	std::list<base*>::iterator secondIt = programList.end();
	
	firstIt++;
	secondIt--;

	programTime* firstVar = (*firstIt)->getDate()->time_;
	programTime* secondVar = (*secondIt)->getDate()->time_;
	
	return *firstVar - *secondVar;
};