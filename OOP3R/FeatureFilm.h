#include "Cartoon.h"

class FeatureFilm : public Cartoon
{
public:
	FeatureFilm();
	FeatureFilm(char* name_, char* time_, char* other_);

	void setFilm(char* name_, char* time_, char* other_);

	char* getLine();
	char* getTime();
};