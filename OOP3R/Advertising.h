#include "base.h"

class advertising : public base
{
public:
	advertising::advertising();
	advertising::advertising(char* name, char* time);

	void setName(char* name);
	void setTime(char* time);

	char* getTime() const;
	char* getName() const;
};