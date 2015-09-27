#ifndef BASE_CHECK
#define  BASE_CHECK

class base
{

public:
	base();
	base(char* name, char* time, char* other);
	
	void setCurrent(base* curr);
	void setNext(base* next);

	virtual char* getTime() const = 0;
	virtual char* getName() const = 0;
	virtual char* getOther() const = 0;
	base* getNext();

	virtual ~base();

protected:
	base* head;
	base* next;

	char* name_;
	char* time_;
	char* other_;
};

#endif