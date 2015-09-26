#ifndef BASE_CHECK
#define  BASE_CHECK

class base
{
protected:
	base* head;
	base* next;
	char* name_;
	char* time_;
	char* other_;

public:
	base();
	base(char* name, char* time, char* other);

	virtual char* getTime() const = 0;
	virtual char* getName() const = 0;
	virtual char* getOther() const = 0;

	base* getHead();

	virtual ~base();
};

#endif