#include "stdafx.h"
#include "classes.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");

	arrOfQuadrangles newArr(
		3,
		quadrilateral(quadrilateral::RECTANGLE, 2, 5),
		quadrilateral(quadrilateral::FOURSQUARE, 3, 3),
		quadrilateral(quadrilateral::RHOMBUS, 3, 5)
		);
	
	newArr.showMaxVal();

	//delete[] newArr.mainQuadrangleVar;

	return 0;
};