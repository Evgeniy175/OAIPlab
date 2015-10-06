#ifndef CONTROLLER_CHECK
#define CONTROLLER_CHECK

#include "base.h"
#include <list>
#include <iostream>

class controller
{
public:
	std::list<base*> searchFilmInYear(int searchYear);
	void showList();
	void addNew(base*);
	int numberOfAdv();	
	programTime* getDuration();

private:
	std::list<base*> programList;
};

#endif