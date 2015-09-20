#include "stdafx.h"
#include "FeatureFilm.h"

FeatureFilm::FeatureFilm() {};

FeatureFilm::FeatureFilm(char* name_, char* time_, char* other_) : Cartoon(name_, time_, other_) {};

void FeatureFilm::setFilm(char* name_, char* time_, char* other_)
{
	setName(name_);
	setTime(time_);
	setOther(other_);
};

char* FeatureFilm::getLine()
{
	return name;
};

char* FeatureFilm::getTime()
{
	return time;
};