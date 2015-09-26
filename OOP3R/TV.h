#include "base.h"
#include <iostream>

class tv : public base
{
private:
	tv* temp;
	char* other_;

public:
	tv();
	tv(char* name, char* time);

	void setTime(char* time);
	void setName(char* name);
	void setOther(char* other);

	char* getTime() const;
	char* getName() const;
	char* getOther() const;

	void addElement(base* element);
	void addElements(int nElements, base* element, ...);

	void showList();
};