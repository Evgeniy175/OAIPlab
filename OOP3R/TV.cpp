#include "stdafx.h"
#include "tv.h"

tv::tv() : base() {}
tv::tv(char* name, char* time)
{
	if (this->head == NULL)
	{
		this->head = this;
		this->next = new tv();
		this->name_ = name;
		this->time_ = time;
		this->other_ = NULL;
	}
	else
	{
		tv::addElement(this);
	};
}

char* tv::getTime() const
{
	return this->time_;
};

char* tv::getName() const
{
	return this->name_;
};

char* tv::getOther() const
{
	return this->other_;
};

void tv::setName(char* name)
{
	this->name_ = name;
};

void tv::setTime(char* time)
{
	this->time_ = time;
};

void tv::setOther(char* other)
{
	this->other_ = other;
};

void tv::addElement(base* element)
{
	if (this->head != NULL)
	{
		temp = (tv*)(this->getHead());

		while (temp->next != NULL)
		{
			temp = (tv*)(temp->next);
		};
		
		temp->name_ = element->getName();
		temp->time_ = element->getTime();
		temp->other_ = element->getOther();
		temp->next = new tv();
	};
};

void tv::addElements(int nElements, base* element, ...)
{
	if (this->head != NULL)
	{
		temp = (tv*)(this->getHead());

		while (temp->next != NULL)
			temp = (tv*)(temp->next);

		for (int i = 0; i < nElements; i++)
		{
			temp->name_ = (*(&element + i))->getName();
			temp->time_ = (*(&element + i))->getTime();
			temp->other_ = (*(&element + i))->getOther();
			temp->next = new tv();
			temp = (tv*)(temp->next);
		};
	};
};

void tv::showList()
{
	temp = (tv*)(this->head);

	while (temp->next != NULL)
	{
		std::cout << temp->getTime() << '\t' << temp->getName();
		if (temp->getOther() != NULL) std::cout << '\t' << temp->getOther();
		std::cout << std::endl;
		temp = (tv*)(temp->next);
	};
}