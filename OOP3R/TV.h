#include "controller.h"
#include <iostream>

class tv : public base, controller
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
	std::list<base*> getList();

	void addElement(base* element);
	void addElements(int nElements, base* element, ...);

private:
	std::list<base*> programList;
};