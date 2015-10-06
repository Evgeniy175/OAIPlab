#include "base.h"

class news : public base
{

public:
	news();
	news(char* name, char* other, date* newDate);
	
	void setName(char* name);
	void setDate(date* time);
	void setOther(char* other);

	date* getDate() const;
	char* getName() const;
	char* getOther() const;
};