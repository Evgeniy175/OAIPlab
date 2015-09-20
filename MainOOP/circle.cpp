#include "stdafx.h"
#include "circle.h"

	Circle::Circle(int x, int y, int radius)
		{
			std::cout << "Конструктор начал работу" << std::endl;
			this->x = x;
			this->y = y;

			if (radius < 0)
			{
				std::cout << "Задан неправильный радиус" << std::endl;
				radius = 0;
			}
			else this->radius = radius;
			std::cout << "Конструктор закончил работу" << std::endl;
		};

	Circle::Circle() : Circle::Circle(0, 0, 0){};
	
	Circle::~Circle()
		{
			this->radius = 0;
			this->x = 0;
			this->y = 0;
			std::cout << "Деструктор отработал" <<std::endl ;
		};

	Circle::Circle(const Circle& A)
		{
			x = A.x;
			y = A.y;
			radius = A.radius;
		};

	float Circle::circleSquare()
		{
			return 3.14 * pow(2,this->radius);
		};

	float Circle::circleLenght()
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

