#include "stdafx.h"
#include "classes.h"
#include <iostream>
	

quadrilateral::quadrilateral()
{
};

quadrilateral::quadrilateral(short TYPE, float FIRSTSIZE, float SECONDSIZE)
{
	std::cout << "---����� ������������---" << std::endl;
	std::cout << " ������: " << TYPE << " � ����������� " << FIRSTSIZE << ", " << SECONDSIZE << std::endl;

	if (FIRSTSIZE <= 0)
	{
		std::cout << "First size is incorrect: " << FIRSTSIZE << std::endl;
	}
	else if (SECONDSIZE <= 0)
	{
		std::cout << "Second size is incorrect: " << SECONDSIZE << std::endl;
	}
	else if (TYPE == RECTANGLE && FIRSTSIZE == SECONDSIZE) // �������� �� ������������ ������ ��������������
	{
		std::cout << "If it's rectangle, firstSize must be != secondSize" << std::endl;
	}
	else if (TYPE == FOURSQUARE && FIRSTSIZE != SECONDSIZE) // �������� �� ��������� ������ ��������
	{
		std::cout << "If it's foursquare, firstSize must be == secondSize" << std::endl;
	}
	else if (TYPE < RECTANGLE || TYPE > RHOMBUS)
	{
		std::cout << "Type of quadrilateral is incorrect: allowed only RECTANGLE, FOURSQUARE, RHOMBUS." << std::endl;
	}
	else
	{
		this->firstSize = FIRSTSIZE;
		this->secondSize = SECONDSIZE;
		this->typeOfQuad = TYPE;
	};

	std::cout << "---����� ������ ������������---" << std::endl << std::endl;
};

quadrilateral::quadrilateral(const quadrilateral& copy)
{
	this->typeOfQuad = copy.typeOfQuad;
	this->firstSize = copy.firstSize;
	this->secondSize = copy.secondSize;
	//this->areaOfQuadrilateral = copy.areaOfQuadrilateral;
	//this->perimeterOfQuadrilateral = copy.perimeterOfQuadrilateral;
};

	
arrOfQuadrangles::arrOfQuadrangles()
{
};

arrOfQuadrangles::arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...)
{
	this->sizeOfArray = count;
	this->mainQuadrangleVar = new quadrilateral[this->sizeOfArray];

	quadrilateral* temp = &firstQuadrangle;
	
	for (int i = 0; i != this->sizeOfArray; i++)
		this->mainQuadrangleVar[i] = *(temp + i);
};


float arrOfQuadrangles::areaOfQuadrangle(quadrilateral quadrangle) // ������� ������
{
	if (quadrangle.getType() == quadrilateral::RHOMBUS)
		return ((quadrangle.getFirstSize()*quadrangle.getSecondSize()) / 2);

	return (quadrangle.getFirstSize())*(quadrangle.getSecondSize());
};


float arrOfQuadrangles::perimeterOfQuadrangle(quadrilateral quadrangle) // �������� ������
{
	if (quadrangle.getType() == quadrilateral::RHOMBUS)
	{
		return 4 * (sqrt((quadrangle.getFirstSize() / 2)*(quadrangle.getFirstSize() / 2) + (quadrangle.getSecondSize() / 2)*(quadrangle.getSecondSize() / 2)));
	};
	return 2 * (quadrangle.getFirstSize() + quadrangle.getSecondSize());
};

void arrOfQuadrangles::showMaxVal() // ����� � ����� ������������ �����
{
	arrOfQuadrangles maxQuad(												// ����� ����������� ���������
		3,
		quadrilateral(quadrilateral::RECTANGLE, 0.00002, 0.0001),
		quadrilateral(quadrilateral::FOURSQUARE, 0.0001, 0.0001),
		quadrilateral(quadrilateral::RHOMBUS, 0.0001, 0.0001)
		);

	quadrilateral* temp = &maxQuad.mainQuadrangleVar[0];


	for (int i = 0; this->mainQuadrangleVar[i].getType() >= quadrilateral::RECTANGLE && this->mainQuadrangleVar[i].getType() <= quadrilateral::RHOMBUS; i++)
	{
		if (this->mainQuadrangleVar[i].getType() == quadrilateral::RECTANGLE)
		{
			if (maxQuad.areaOfQuadrangle(temp[0]) < this->areaOfQuadrangle(mainQuadrangleVar[i])) temp[0] = this->mainQuadrangleVar[i];
		}
		else if (this->mainQuadrangleVar[i].getType() == quadrilateral::FOURSQUARE)
		{
			if (maxQuad.areaOfQuadrangle(temp[1]) < this->areaOfQuadrangle(mainQuadrangleVar[i])) temp[1] = this->mainQuadrangleVar[i];
		}
		else if (this->mainQuadrangleVar[i].getType() == quadrilateral::RHOMBUS)
		{
			if (maxQuad.areaOfQuadrangle(temp[2]) < this->areaOfQuadrangle(mainQuadrangleVar[i])) temp[2] = this->mainQuadrangleVar[i];
		};
	};

	std::cout << "Max rectangle has an area " << maxQuad.areaOfQuadrangle(temp[0]) << std::endl;
	std::cout << "Max foursquare has an area " << maxQuad.areaOfQuadrangle(temp[1]) << std::endl;
	std::cout << "Max rhombus has an area " << maxQuad.areaOfQuadrangle(temp[2]) << std::endl << std::endl;
};

arrOfQuadrangles::arrOfQuadrangles(const arrOfQuadrangles& copy)
{
	this->mainQuadrangleVar = new quadrilateral[copy.sizeOfArray];
	this->sizeOfArray = copy.sizeOfArray;

	for (int i = 0; i < copy.sizeOfArray; i++)
	{
		this->mainQuadrangleVar[i] = copy.mainQuadrangleVar[i];
	};
};

arrOfQuadrangles::~arrOfQuadrangles()
{
	std::cout << "---������ ������ �����������---" << std::endl;
	std::cout << " �������� �������, ����������� " << this->sizeOfArray << " ��������" << std::endl;

	//for (int i = 0; i < this->sizeOfArray; i++)
	//{
		delete[] mainQuadrangleVar;
	//};

	std::cout << "---����� ������ �����������---" << std::endl << std::endl;
};