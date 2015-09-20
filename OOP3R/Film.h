#include "Cartoon.h"
#include "Producer.h"

class Film : public Cartoon
{
public:
	Film();
	Film(char* name_, char* time_, char* other_);

	void setFilm(char* name_, char* time_, char* other_);
	void setProducer(Producer* producer_);

	char* getTime();
	char* getLine();
};