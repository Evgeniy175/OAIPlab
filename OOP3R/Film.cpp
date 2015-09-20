#include "stdafx.h"
#include "Film.h"

Film::Film() {};
Film::Film(char* name_, char* time_, char* other_) : Cartoon(name_, time_, other_) {};

void Film::setFilm(char* name_, char* time_, char* other_)
{
	setTime(time_);
	setName(name_);
};

void Film::setProducer(Producer* producer_)
{
	setOther(producer_->getName());
};

char* Film::getLine()
{
	return name;
};

char* Film::getTime()
{
	return time;
};