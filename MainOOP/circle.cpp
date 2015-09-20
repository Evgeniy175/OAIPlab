#include "stdafx.h"
#include "circle.h"

	Circle::Circle(int x, int y, int radius)
		{
			std::cout << "\n---Конструктор класса Circle начал работу\nПараметры:X=" << x << "   ;Y=" << y << "   ;radius=" << radius<<std::endl;
			this->x = x;
			this->y = y;
			if (radius < 0)
			{
				std::cout << "Задан неправильный радиус\n";
				radius = 0;
			}
			else this->radius = radius;
			std::cout << "Конструктор закончил работу\n";
		};

	Circle::Circle() : Circle::Circle(0, 0, 0){};
	
	Circle::~Circle()
		{
			std::cout << "\n---Деструктор класса Circle начал работу" << std::endl;
			this->radius = 0;
			this->x = 0;
			this->y = 0;
			std::cout << "Деструктор класса Circle отработал" <<std::endl ;
		};

	Circle::Circle(const Circle& A)
		{
			std::cout << "\n---Конструктор копирования класса Circle начал работу\n";
			x = A.x;
			y = A.y;
			radius = A.radius;
			std::cout << "Конструктор копирования класса Circle закончил работу\n";
		};

	double Circle::circleSquare()
		{
			return 3.14 * pow(2,this->radius);
		};

	double Circle::circleLenght()
		{
			return 2 * 3.14*this->radius;
		};

	void Circle::setRadius(int radius)
		{
			if (radius < 0||radius>maxXYR)
				std::cout << "Недопустимое значение радиуса" << std::endl;
			else
			this->radius = radius;
		};

	void Circle::setX(int x)
		{
			if (x < minXY || x>maxXYR)
				std::cout << "Недопустимое значение X" << std::endl;
			else 
			this->x = x;
		};

	void Circle::setY(int y)
		{
			if (y < minXY || y>maxXYR)
				std::cout << "Недопустимое значение Y" << std::endl;
			else
				this->y = y;
		};

	int Circle::getRadius()
		{
			return radius;
		};

	int Circle::getX()
		{
			return x;
		};

	int Circle::getY()
		{
			return y;
		};

