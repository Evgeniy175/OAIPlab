#ifndef BASE_CHECK
#define  BASE_CHECK

class base
{
protected:
	base* head;
	base* next;
	char* name_;
	char* time_;

public:
	base();
	base(char* name, char* time);

	virtual char* getTime() const = 0;
	virtual char* getName() const = 0;

	virtual ~base();
};

#endif