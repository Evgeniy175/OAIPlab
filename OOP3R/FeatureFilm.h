#include "base.h"

class featureFilm : public base
{
private:
	char* other_;

public:
	featureFilm();
	featureFilm(char* name, char* time, char* other);

	void setName(char* name);
	void setTime(char* time);
	void setOther(char* other);

	char* getName() const;
	char* getTime() const;
	char* getOther() const;
};