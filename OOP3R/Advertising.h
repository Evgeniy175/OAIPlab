#include "base.h"

class advertising : public base
{
public:
	advertising::advertising();
	advertising::advertising(char* name, char* time, char* other);

	void setName(char* name);
	void setTime(char* time);
	void setOther(char* other);

	char* getTime() const;
	char* getName() const;
	char* getOther() const;
};