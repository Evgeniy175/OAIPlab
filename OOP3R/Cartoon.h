#include "base.h"

class cartoon : public base
{
public:
	cartoon();
	cartoon(char* name, char* time);

	void setTime(char* time);
	void setName(char* name);
	void setOther(char* other);

	char* getTime() const;
	char* getName() const;
	char* getOther() const;
};