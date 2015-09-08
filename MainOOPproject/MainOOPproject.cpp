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

	quadrilateral* mainQuadrangleVar;
	
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
	
	float areaOfQuadrangle(quadrilateral quadrangle)
	{
		if (quadrangle.typeOfQuad == quadrilateral::RHOMBUS)
		{
			return ((quadrangle.firstSize*quadrangle.secondSize) / 2);
		};
		return (quadrangle.firstSize)*(quadrangle.secondSize);
	};

	float perimeterOfQuadrangle(quadrilateral quadrangle)
	{
		if (quadrangle.typeOfQuad == quadrilateral::RHOMBUS)
		{
			return 4 * (sqrt((quadrangle.firstSize / 2)*(quadrangle.firstSize / 2) + (quadrangle.secondSize / 2)*(quadrangle.secondSize / 2)));
		};
		return 2 * (quadrangle.firstSize + quadrangle.secondSize);
	};
};



int _tmain(int argc, _TCHAR* argv[])
{
	arrOfQuadrangles newArr(
		3,
		quadrilateral(quadrilateral::RECTANGLE, 2, 5),
		quadrilateral(quadrilateral::FOURSQUARE, 3, 3),
		quadrilateral(quadrilateral::RHOMBUS, 3, 5)
		);
	


	return 0;
};