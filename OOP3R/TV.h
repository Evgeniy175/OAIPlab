#include "controller.h"
#include <iostream>

class tv : public base
{

public:
	tv();
	tv(char* name, date* newDate);

	void setDate(date* time);
	void setName(char* name);
	void setOther(char* other);

	date* getDate() const;
	char* getName() const;
	char* getOther() const;

	void addElement(base* element);
	void addElements(int nElements, base* element, ...);
	void show();
	void searchFilmInYear(int year);
	void programDuration();
	int showNumberOfAdv();

private:
	controller* programController;
};