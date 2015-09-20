#include "stdafx.h"
#include "circlemas.h"

CircleMas::CircleMas()
	{
		std::cout << "\n---Вызван конструктор класса Circlemas без параметров\n";
		this->circleMas = new Circle[maxColOfCircles];
		this->kolOfCircles = NULL;
		std::cout << "Конструктор закончил работу\n";
	};

CircleMas::CircleMas(int kol, Circle mas, ...)
	{
		std::cout << "\n---Вызван конструктор класса Circlemas с переменным числом параметров\n";
		this->circleMas = new Circle[maxColOfCircles];
		this->kolOfCircles = NULL;
		Circle *temp = &mas;
		for (int i = 0; i < kol; i++)
		{
			Circle buf(temp[i]);
			this->circleMas[i] = buf;
			this->kolOfCircles++;
		};
	};

CircleMas::~CircleMas()
	{
		std::cout << "\n---Деструктор класса CircleMas вызван\n";
		delete[maxColOfCircles] this->circleMas;
		kolOfCircles = 0;
		std::cout << "Деструктор класса CircleMas закончил работу\n";
	};

CircleMas::CircleMas(CircleMas& A)
	{
		circleMas = A.circleMas;
		kolOfCircles = A.kolOfCircles;
	};

void CircleMas::setCircleMas(Circle* Mas)
	{
		this->circleMas = Mas;
	};

void CircleMas::setKolOfCircles(int kol)
	{
		this->kolOfCircles = kol;
	};

Circle* CircleMas::getCircleMas()
	{
		return this->circleMas;
	};

int CircleMas::getKolOfCircles()
	{
		return this->kolOfCircles;
	};


void CircleMas::circleMasAddCircle(Circle& circle)
	{ 
		if (this->kolOfCircles < maxColOfCircles)
		{
			this->circleMas[this->kolOfCircles] = circle;
			this->kolOfCircles++;
		}
		else std::cout << "Превышено число окружностей в массиве" << std::endl;
	};

void CircleMas::circleWithCentersOnOneLine()
	{
		std::cout << "----------------Группы окружностей с центрами на одной прямой----------------------" << std::endl;
		double c, b;
		for (int i = 0; i < kolOfCircles - 1; i++)
		{	
			std::cout << "-----Группа №" << i+1 << std::endl;
			for (int l = i+1; l < kolOfCircles ; l++)
			{
				if ((this->circleMas[i + l].x - this->circleMas[i].x) == 0)b = 0;
				else b = (this->circleMas[i + l].y - this->circleMas[i].y) / (this->circleMas[i + l].x - this->circleMas[i].x);
				c = (this->circleMas[i].y - b*this->circleMas[i].x);
				for (int j = l-1; j < kolOfCircles-1; j++)
				{
					if (this->circleMas[j].y == (int)(b*this->circleMas[j].x + c))
					std::cout << "x=" << this->circleMas[j].x << "  y=" << this->circleMas[j].y << "  radius= " << this->circleMas[j].radius << std::endl;
				};
			};
		};
	};

Circle *CircleMas::maxSqCircle()
	{
		Circle* maxSqCircle=new Circle(this->circleMas[0]);
		for (int i = 1; i < this->kolOfCircles; i++)
		{
			if (maxSqCircle->circleSquare() < this->circleMas[i].circleSquare())
				maxSqCircle = &this->circleMas[i];
		};
		return maxSqCircle;
	};

Circle *CircleMas::minSqCircle()
	{
		Circle* minSqCircle = new Circle(this->circleMas[0]);
		for (int i = 1; i < this->kolOfCircles; i++)
		{
			if (minSqCircle->circleSquare() > this->circleMas[i].circleSquare())
				minSqCircle = &this->circleMas[i];
		};
		return minSqCircle;
	};

void CircleMas::circlesInFirstQuarter()
	{
		std::cout << "Окружности из первой четверти:" << std::endl;
		for (int i = 0; i < this->kolOfCircles; i++)
		{
			if (((this->circleMas[i].x - this->circleMas[i].getRadius()) > 0) && ((this->circleMas[i].y - this->circleMas[i].getRadius())> 0))
				std::cout << "Окружность номер - " << i+1 << " Координаты\nX = " << this->circleMas[i].x << "\nY = " << this->circleMas[i].y << "\nРадиус = " << this->circleMas[i].radius << std::endl;
		};
	};

void CircleMas::printMaxSqCircle()
	{
		Circle* MaxCircle = this->maxSqCircle();
		std::cout << "Окружность максимальной площади " << std::endl;
		std::cout << "Площадь=" << MaxCircle->circleSquare() << std::endl;
		std::cout << "X=" << MaxCircle->getX() << std::endl;
		std::cout << "Y=" << MaxCircle->getY() << std::endl;
		std::cout << "Радиус=" << MaxCircle->getRadius() << std::endl;
	};

void CircleMas::printMinSqCircle()
	{
		Circle* MinCircle = this->maxSqCircle();
		std::cout << "Окружность минимальной площади " << std::endl;
		std::cout << "Площадь=" << MinCircle->circleSquare() << std::endl;
		std::cout << "X=" << MinCircle->getX() << std::endl;
		std::cout << "Y=" << MinCircle->getY() << std::endl;
		std::cout << "Радиус=" << MinCircle->getRadius() << std::endl;
	};
