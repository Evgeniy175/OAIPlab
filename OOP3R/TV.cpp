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
		base* temp = head;

		while (temp->getNext() != NULL)
			temp = temp->getNext();

		temp->setCurrent(element);
		temp->setNext(new tv());
	};
};

void tv::addElements(int nElements, base* element, ...)
{
	if (this->head != NULL)
	{
		base* temp = head;

		while (temp->getNext() != NULL)
			temp = temp->getNext();

		for (int i = 0; i < nElements; i++, temp = temp->getNext())
		{
			temp->setCurrent(*(&element + i));
			temp->setNext(new tv());
		};
	};
};

void tv::showList()
{
	base* temp = head;

	while (temp->getNext() != NULL)
	{
		std::cout << temp->getTime() << '\t' << temp->getName();
		if (temp->getOther() != NULL) std::cout << '\t' << temp->getOther();
		std::cout << std::endl;
		temp = temp->getNext();
	};
}