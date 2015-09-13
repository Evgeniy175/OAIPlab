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

quadrilateral::quadrilateral(quadrilateral const& copy)
{
	this->typeOfQuad = copy.typeOfQuad;
	this->firstSize = copy.firstSize;
	this->secondSize = copy.secondSize;
	this->areaOfQuadrilateral = copy.areaOfQuadrilateral;
	this->perimeterOfQuadrilateral = copy.perimeterOfQuadrilateral;
};

	
arrOfQuadrangles::arrOfQuadrangles()
{
};

arrOfQuadrangles::arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...)
{
	this->sizeOfArray = count;
	this->mainQuadrangleVar = new quadrilateral[this->sizeOfArray];

	quadrilateral* temp = &firstQuadrangle;

	int i = 0;

	while (i != this->sizeOfArray)
	{
		this->mainQuadrangleVar[i] = *(temp + i);

		this->mainQuadrangleVar[i].perimeterOfQuadrilateral = perimeterOfQuadrangle(this->mainQuadrangleVar[i]);
		this->mainQuadrangleVar[i].areaOfQuadrilateral = areaOfQuadrangle(this->mainQuadrangleVar[i]);
		i++;
	};
};


float arrOfQuadrangles::areaOfQuadrangle(quadrilateral quadrangle) // ������� ������
{
	if (quadrangle.typeOfQuad == quadrilateral::RHOMBUS)
	{
		return ((quadrangle.firstSize*quadrangle.secondSize) / 2);
	};
	return (quadrangle.firstSize)*(quadrangle.secondSize);
};


float arrOfQuadrangles::perimeterOfQuadrangle(quadrilateral quadrangle) // �������� ������
{
	if (quadrangle.typeOfQuad == quadrilateral::RHOMBUS)
	{
		return 4 * (sqrt((quadrangle.firstSize / 2)*(quadrangle.firstSize / 2) + (quadrangle.secondSize / 2)*(quadrangle.secondSize / 2)));
	};
	return 2 * (quadrangle.firstSize + quadrangle.secondSize);
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

	for (int i = 0; this->mainQuadrangleVar[i].typeOfQuad >= quadrilateral::RECTANGLE && this->mainQuadrangleVar[i].typeOfQuad <= quadrilateral::RHOMBUS; i++)
	{
		if (this->mainQuadrangleVar[i].typeOfQuad == quadrilateral::RECTANGLE)
		{
			if (temp[0].areaOfQuadrilateral < this->mainQuadrangleVar[i].areaOfQuadrilateral) temp[0] = this->mainQuadrangleVar[i];
		}
		else if (this->mainQuadrangleVar[i].typeOfQuad == quadrilateral::FOURSQUARE)
		{
			if (temp[1].areaOfQuadrilateral < this->mainQuadrangleVar[i].areaOfQuadrilateral) temp[1] = this->mainQuadrangleVar[i];
		}
		else if (this->mainQuadrangleVar[i].typeOfQuad == quadrilateral::RHOMBUS)
		{
			if (temp[2].areaOfQuadrilateral < this->mainQuadrangleVar[i].areaOfQuadrilateral) temp[2] = this->mainQuadrangleVar[i];
		};
	};

	std::cout << "Max rectangle has an area " << temp[0].areaOfQuadrilateral << std::endl;
	std::cout << "Max foursquare has an area " << temp[1].areaOfQuadrilateral << std::endl;
	std::cout << "Max rhombus has an area " << temp[2].areaOfQuadrilateral << std::endl << std::endl;
};

arrOfQuadrangles::~arrOfQuadrangles()
{
	std::cout << "---������ ������ �����������---" << std::endl;
	std::cout << " �������� �������, ����������� " << this->sizeOfArray << " ��������" << std::endl;

	delete[] mainQuadrangleVar;

	std::cout << "---����� ������ �����������---" << std::endl << std::endl;
};