#include "stdafx.h"
#include "circle.h"

	Circle::Circle(int x, int y, int radius)
		{
			std::cout << "\n---����������� ������ Circle ����� ������\n���������:X=" << x << "   ;Y=" << y << "   ;radius=" << radius<<std::endl;
			this->x = x;
			this->y = y;
			if (radius < 0)
			{
				std::cout << "����� ������������ ������\n";
				radius = 0;
			}
			else this->radius = radius;
			std::cout << "����������� �������� ������\n";
		};

	Circle::Circle() : Circle::Circle(0, 0, 0){};
	
	Circle::~Circle()
		{
			std::cout << "\n---���������� ������ Circle ����� ������" << std::endl;
			this->radius = 0;
			this->x = 0;
			this->y = 0;
			std::cout << "���������� ������ Circle ���������" <<std::endl ;
		};

	Circle::Circle(const Circle& A)
		{
			std::cout << "\n---����������� ����������� ������ Circle ����� ������\n";
			x = A.x;
			y = A.y;
			radius = A.radius;
			std::cout << "����������� ����������� ������ Circle �������� ������\n";
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
				std::cout << "������������ �������� �������" << std::endl;
			else
			this->radius = radius;
		};

	void Circle::setX(int x)
		{
			if (x < minXY || x>maxXYR)
				std::cout << "������������ �������� X" << std::endl;
			else 
			this->x = x;
		};

	void Circle::setY(int y)
		{
			if (y < minXY || y>maxXYR)
				std::cout << "������������ �������� Y" << std::endl;
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

