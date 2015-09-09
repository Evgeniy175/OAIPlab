#include "stdafx.h"
#include <iostream>

class quadrilateral
{

public:

	enum typeOfQuadrilateral { RECTANGLE, FOURSQUARE, RHOMBUS };

	short typeOfQuad; // тип четырёхугольника через enum (0 - прямоуг)

	float firstSize; // ширина четырёхугольника или длина 1-й диагонали ромба
	float secondSize; // высота четырёхугольника или длина 2-й диагонали ромба

	float areaOfQuadrilateral; // площадь 
	float perimeterOfQuadrilateral; // периметр четырёхугольника

	quadrilateral()
	{
	};

	quadrilateral(short TYPE, float FIRSTSIZE, float SECONDSIZE)
	{
		if (FIRSTSIZE <= 0)
		{
			std::cout << "First size is incorrect: " << FIRSTSIZE << std::endl;
		}
		else if (SECONDSIZE <= 0)
		{
			std::cout << "Second size is incorrect: " << SECONDSIZE << std::endl;
		}
		else if (TYPE == RECTANGLE && FIRSTSIZE == SECONDSIZE) // проверка на правильность сторон прямоугольника
		{
			std::cout << "If it's rectangle, firstSize must be != secondSize" << std::endl;
		}
		else if (TYPE == FOURSQUARE && FIRSTSIZE != SECONDSIZE) // проверка на равенство сторон квадрата
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
	};
};

class arrOfQuadrangles
{

public:

	quadrilateral* mainQuadrangleVar; // массив классов

	arrOfQuadrangles()
	{
	};

	arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...)
	{
		this->mainQuadrangleVar = new quadrilateral[count];

		quadrilateral* temp = &firstQuadrangle;

		int i = 0;

		while (i != count)
		{
			this->mainQuadrangleVar[i] = *(temp + i);

			this->mainQuadrangleVar[i].perimeterOfQuadrilateral = perimeterOfQuadrangle(this->mainQuadrangleVar[i]);
			this->mainQuadrangleVar[i].areaOfQuadrilateral = areaOfQuadrangle(this->mainQuadrangleVar[i]);
			i++;
		};
	};


	float areaOfQuadrangle(quadrilateral quadrangle) // площадь фигуры
	{
		if (quadrangle.typeOfQuad == quadrilateral::RHOMBUS)
		{
			return ((quadrangle.firstSize*quadrangle.secondSize) / 2);
		};
		return (quadrangle.firstSize)*(quadrangle.secondSize);
	};


	float perimeterOfQuadrangle(quadrilateral quadrangle) // периметр фигуры
	{
		if (quadrangle.typeOfQuad == quadrilateral::RHOMBUS)
		{
			return 4 * (sqrt((quadrangle.firstSize / 2)*(quadrangle.firstSize / 2) + (quadrangle.secondSize / 2)*(quadrangle.secondSize / 2)));
		};
		return 2 * (quadrangle.firstSize + quadrangle.secondSize);
	};

	void showMaxVal() // поиск и вывод максимальных фигур
	{
		arrOfQuadrangles maxQuad(
			3,
			quadrilateral(quadrilateral::RECTANGLE, 0.00005, 0.0001),
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
		std::cout << "Max rhombus has an area " << temp[2].areaOfQuadrilateral << std::endl;
	};

	~arrOfQuadrangles()
	{
		delete[] mainQuadrangleVar;
	};
};