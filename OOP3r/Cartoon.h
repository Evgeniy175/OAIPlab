#ifndef CARTOON_CHECKER
#define  CARTOON_CHECKER

class Cartoon
{
protected:
	char* time;
	char* name;
	char* other;

public:
	Cartoon();
	Cartoon(char* name_, char* time_, char* other_);

	char* getTime();
	char* getName();
	char* getOther();

	void setTime(char* time_);
	void setName(char* name_);
	void setOther(char* other);
};

#endif