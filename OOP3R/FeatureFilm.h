#include "base.h"

class featureFilm : public base
{

public:
	featureFilm();
	featureFilm(char* name, char* other, date* newDate);

	void setName(char* name);
	void setDate(date* time);
	void setOther(char* other);

	char* getName() const;
	date* getDate() const;
	char* getOther() const;
};