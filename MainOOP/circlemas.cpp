#include "stdafx.h"
#include "circlemas.h"

CircleMas::CircleMas()
	{
		std::cout << "\n---������ ����������� ������ Circlemas ��� ����������\n";
		this->circleMas = new Circle[maxColOfCircles];
		this->kolOfCircles = NULL;
		std::cout << "����������� �������� ������\n";
	};

CircleMas::CircleMas(int kol, Circle mas, ...)
	{
		std::cout << "\n---������ ����������� ������ Circlemas � ���������� ������ ����������\n";
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
		std::cout << "\n---���������� ������ CircleMas ������\n";
		delete[maxColOfCircles] this->circleMas;
		kolOfCircles = 0;
		std::cout << "���������� ������ CircleMas �������� ������\n";
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
		else std::cout << "��������� ����� ����������� � �������" << std::endl;
	};

void CircleMas::circleWithCentersOnOneLine()
	{
		std::cout << "----------------������ ����������� � �������� �� ����� ������----------------------" << std::endl;
		double c, b;
		for (int i = 0; i < kolOfCircles - 1; i++)
		{	
			std::cout << "-----������ �" << i+1 << std::endl;
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
		std::cout << "���������� �� ������ ��������:" << std::endl;
		for (int i = 0; i < this->kolOfCircles; i++)
		{
			if (((this->circleMas[i].x - this->circleMas[i].getRadius()) > 0) && ((this->circleMas[i].y - this->circleMas[i].getRadius())> 0))
				std::cout << "���������� ����� - " << i+1 << " ����������\nX = " << this->circleMas[i].x << "\nY = " << this->circleMas[i].y << "\n������ = " << this->circleMas[i].radius << std::endl;
		};
	};

void CircleMas::printMaxSqCircle()
	{
		Circle* MaxCircle = this->maxSqCircle();
		std::cout << "���������� ������������ ������� " << std::endl;
		std::cout << "�������=" << MaxCircle->circleSquare() << std::endl;
		std::cout << "X=" << MaxCircle->getX() << std::endl;
		std::cout << "Y=" << MaxCircle->getY() << std::endl;
		std::cout << "������=" << MaxCircle->getRadius() << std::endl;
	};

void CircleMas::printMinSqCircle()
	{
		Circle* MinCircle = this->maxSqCircle();
		std::cout << "���������� ����������� ������� " << std::endl;
		std::cout << "�������=" << MinCircle->circleSquare() << std::endl;
		std::cout << "X=" << MinCircle->getX() << std::endl;
		std::cout << "Y=" << MinCircle->getY() << std::endl;
		std::cout << "������=" << MinCircle->getRadius() << std::endl;
	};
