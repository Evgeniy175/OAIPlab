#include "Cartoon.h"

class Advertising : public Cartoon
{
public:
	Advertising();
	Advertising(char* name_, char* time_, char* other_);

	void setLine(char* name_, char* time_, char* other_);

	char* getTime();
	char* getLine();
};