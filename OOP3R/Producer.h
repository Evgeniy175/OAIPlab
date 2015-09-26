#include "base.h"

#ifndef PRODUCER_CHECK
#define PRODUCER_CHECK

class producer : public base
{
public:
	producer();
	producer(char* name, char* time);

	void setName(char* name);
	void setTime(char* time);

	char* getName() const;
	char* getTime() const;
};

#endif