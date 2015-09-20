#include "Cartoon.h"

class News : public Cartoon
{
public:
	News();
	News(char* name_, char* time_, char* other_);

	void setNews(char* name_, char* time_, char* other_);

	char* getTime();
	char* getNews();
};