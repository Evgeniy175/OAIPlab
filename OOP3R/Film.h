#include "base.h"

class film : public base
{
private:
	char* other_;

public:
	film();
	film(char* name, char* time, char* other);

	void setName(char* name);
	void setTime(char* time);
	void setOther(char* other);

	char* getTime() const;
	char* getName() const;
	char* getOther();
};