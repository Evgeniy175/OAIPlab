#include "stdafx.h"
#include "classes.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");

	/*arrOfQuadrangles newArr(
		3,
		quadrilateral(quadrilateral::RECTANGLE, 2, 5),
		quadrilateral(quadrilateral::FOURSQUARE, 3, 3),
		quadrilateral(quadrilateral::RHOMBUS, 3, 5)
		);*/
	arrOfQuadrangles* newArr = new arrOfQuadrangles(
		3,
		quadrilateral(quadrilateral::RECTANGLE, 2, 5),
		quadrilateral(quadrilateral::FOURSQUARE, 3, 3),
		quadrilateral(quadrilateral::RHOMBUS, 3, 5)
		);
	
	arrOfQuadrangles* copyArr = new arrOfQuadrangles(*newArr);

	copyArr->mainQuadrangleVar[0].setFirstSize(19);

	newArr->showMaxVal();

	delete newArr;

	return 0;
};