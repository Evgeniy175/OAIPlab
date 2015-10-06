#include "base.h"

class advertising : public base
{

public:
	advertising();
	advertising(char* name, char* other, date* time);

	void setName(char* name);
	void setDate(date* time);
	void setOther(char* other);

	date* getDate() const;
	char* getName() const;
	char* getOther() const;
};