#include "base.h"

class tv : public base
{
public:
	tv();
	tv(char* name, char* time);

	void setTime(char* time);
	void setName(char* name);

	char* getTime() const;
	char* getName() const;
};