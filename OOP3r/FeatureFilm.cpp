#include "stdafx.h"
#include "FeatureFilm.h"

FeatureFilm::FeatureFilm()
{
	this->filmName = NULL;
};

FeatureFilm::FeatureFilm(char* name_)
{
	this->filmName = name_;
};

void FeatureFilm::setName(char* name_)
{
	this->filmName = name_;
};

char* FeatureFilm::getName()
{
	return this->filmName;
};