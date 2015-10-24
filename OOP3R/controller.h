#ifndef CONTROLLER_CHECK
#define CONTROLLER_CHECK

#include "base.h"
#include <list>
#include <iostream>

class controller
{
public:
	std::list<base*> searchFilmInYear(std::list<base*> programList, int searchYear);
	void showList(std::list<base*> programList);
	int numberOfAdv(std::list<base*> programList);
	programTime* getDuration(std::list<base*> programList);
};

#endif