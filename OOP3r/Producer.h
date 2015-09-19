#include "Cartoon.h"

#ifndef PRODUCER_CHECK
#define PRODUCER_CHECK

class Producer : public Cartoon
{
public:
	Producer();
	Producer(char* name_, char* time_, char* other_);

	void setProducer(char* name_, char* time_, char* other_);

	char* getName();
	char* getDate();
};

#endif