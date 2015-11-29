#pragma once
#define ERROR_MSG_SIZE 255

namespace ERROR{
	class Error{
	public:
		char* getMsg();

	protected:
		char msg_[255];
	};

	class ErrorDelete : public Error{
	public:
		ErrorDelete(char* msg);
	};

	class ErrorSize : public Error{
	public:
		ErrorSize(char* sizeName);
	};

	class ErrorConstructor : public Error{
	public:
		ErrorConstructor(char* constructorName);
	};

	class ErrorDectructor : public Error{
	public:
		ErrorDectructor(char* destructorName);
	};

	class ErrorRectangle : public Error{
	public:
		ErrorRectangle();
	};

	class ErrorFoursquare : public Error{
	public:
		ErrorFoursquare();
	};

	class ErrorType : public Error{
	public:
		ErrorType();
	};

	class ErrorNoElement : public Error{
	public:
		ErrorNoElement();
	};
}