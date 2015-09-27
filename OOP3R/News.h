#include "base.h"

class news : public base
{

public:
	news();
	news(char* name, char* time, char* other);
	
	void setName(char* name);
	void setTime(char* time);
	void setOther(char* other);

	char* getTime() const;
	char* getName() const;
	char* getOther() const;
};