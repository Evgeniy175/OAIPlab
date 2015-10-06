#include "base.h"

class cartoon : public base
{

public:
	cartoon();
	cartoon(char* name, char* other, date* newDate);

	void setDate(date* newDate);
	void setName(char* name);
	void setOther(char* other);

	date* getDate() const;
	char* getName() const;
	char* getOther() const;
};