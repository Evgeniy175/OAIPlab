#include "base.h"

class news : public base
{
public:
	news();
	news(char* name, char* time);
	
	void setName(char* name);
	void setTime(char* time);

	char* getTime() const;
	char* getName() const;
};