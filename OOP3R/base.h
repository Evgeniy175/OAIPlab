#ifndef BASE_CHECK
#define  BASE_CHECK

#include <iostream>
#include <list>

enum programType
{
	TV,
	ADVERTISING,
	CARTOON,
	FEATUREFILM,
	FILM,
	NEWS
};

struct programTime
{
	programTime();
	programTime(int hours, int minutes);

	int hours_;
	int minutes_;

	friend programTime* operator- (const programTime& first, const programTime& second)
	{
		programTime* rc = new programTime;
		
		if (first.hours_ > second.hours_)		rc->hours_ = first.hours_ - second.hours_;
		else	rc->hours_ = second.hours_ - first.hours_;
		
		if (first.minutes_ != second.minutes_) rc->hours_--;

		if (first.minutes_ > second.minutes_)	rc->minutes_ = first.minutes_ - second.minutes_;
		else	rc->minutes_ = second.minutes_ - first.minutes_;

		return rc;
	};
};

struct date
{
	void showDate();

	date();
	date(int year, int month, int day, programTime* time);

	int year_;
	int month_;
	int day_;
	programTime* time_;
};

class base
{
public:
	base();
	base(char* name, char* other);
	base(char* name, char* other, date* time);
	
	void setCurrent(base* curr);

	virtual date* getDate() const = 0;
	virtual char* getName() const = 0;
	virtual char* getOther() const = 0;

	int getType()
	{
		return this->progType;
	};

	virtual ~base();

protected:
	date* date_;
	char* name_;
	char* other_;
	int progType;

private:
	static base* head;
	friend class tv;
};

#endif