#ifndef PRODUCER_CHECK
#define PRODUCER_CHECK

#include "base.h"

class producer : public base
{
public:
	producer();
	producer(char* name, char* other, date* newDate);

	void setName(char* name);
	void setDate(date* time);
	void setOther(char* other);

	char* getName() const;
	date* getDate() const;
	char* getOther() const;
};

#endif