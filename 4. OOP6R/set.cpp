#include "stdafx.h"
#include "set.h"

set::set()
{
	this->size_ = NULL;
}

set::set(int size)
{
	this->arr_ = new int[size];
}

set::set(int size, int first, ...)
{
	this->arr_ = new int[size];
	this->size_ = size;

	for (int i = 0; i < size; i++)
		this->arr_[i] = *(&first + i);
}

int set::powerSet()
{
	return this->size_;
};

void set::addElement(int count)
{
	if (this->size_ == NULL)   this->arr_[this->size_++] = count;
	else if (!this->isSimilar(count))   this->arr_[this->size_++] = count;
};

bool set::isSimilar(int count)
{
	for (int i = 0; i < this->size_; i++)
		if (this->arr_[i] == count)   return true;

	return false;
};

bool set::operator> (int var)
{
	for (int i = 0; i < this->powerSet(); i++) 
		if (this->arr_[i] == var)   return true;

	return false;
};

set* operator* (set& first, set& second)
{
	int arrSize = first.powerSet() > second.powerSet() ? first.powerSet() : second.powerSet();
	set* rc = new set(arrSize);

	for (int i = 0; i < first.powerSet(); i++)
		for (int j = 0; j < second.powerSet(); j++)
			if (first.arr_[i] == second.arr_[j])   rc->addElement(first.arr_[i]);

	return rc;
};

bool set::operator< (set& second)
{
	int counter = 0;

	if (this->powerSet() == NULL || second.powerSet() == NULL)   return false;

	else for (int i = 0; i < this->powerSet(); i++)
			for (int j = 0; j < second.powerSet(); j++)
				if (this->arr_[i] == second.arr_[j])   counter++;

	return second.powerSet() == counter ? true : false;
};

int& set::operator[](int i)
{
	return this->arr_[i];
};