#include "base.h"

#ifndef PRODUCER_CHECK
#define PRODUCER_CHECK

class producer : public base
{
public:
	producer();
	producer(char* name, char* time, char* other);

	void setName(char* name);
	void setTime(char* time);
	void setOther(char* other);

	char* getName() const;
	char* getTime() const;
	char* getOther() const;
};

#endif