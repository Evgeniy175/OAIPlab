#include "stdafx.h"
#include "exception.h"
#include <iostream>

namespace ERROR{
	char* Error::getMsg(){
		return this->msg_;
	};

	ErrorDelete::ErrorDelete(char* msg){
		strcpy_s(this->msg_, "error deleting ");
		strcat_s(this->msg_, msg);
	}

	ErrorSize::ErrorSize(char* sizeName){
		strcpy_s(this->msg_, "error size ");
		strcat_s(this->msg_, sizeName);
		strcat_s(this->msg_, " < NULL");
	}

	ErrorConstructor::ErrorConstructor(char* constructorName){
		strcpy_s(this->msg_, "constructor of ");
		strcat_s(this->msg_, constructorName);
		strcat_s(this->msg_, " class : incorrect size <= NULL");
	};

	ErrorDectructor::ErrorDectructor(char* destructorName){
		strcpy_s(this->msg_, "destructor ");
		strcat_s(this->msg_, destructorName);
		strcat_s(this->msg_, " nullptr");
	}

	ErrorRectangle::ErrorRectangle(){
		strcpy_s(this->msg_, "rectangle, firstSize must be != secondSize");
	}

	ErrorFoursquare::ErrorFoursquare(){
		strcpy_s(this->msg_, "foursquare, firstSize must be == secondSize");
	}

	ErrorType::ErrorType(){
		strcpy_s(this->msg_, "Type of quadrilateral is incorrect: allowed only: \
							 				 RECTANGLE, FOTRSQTARE, RHOMBUS.");
	}

	ErrorNoElement::ErrorNoElement(){
		strcpy_s(this->msg_, "no element");
	}
};