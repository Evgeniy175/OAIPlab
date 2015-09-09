#include "stdafx.h"
#include "classes.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	arrOfQuadrangles newArr(
		3,
		quadrilateral(quadrilateral::RECTANGLE, 2, 5),
		quadrilateral(quadrilateral::FOURSQUARE, 3, 3),
		quadrilateral(quadrilateral::RHOMBUS, 3, 5)
		);
	
	newArr.showMaxVal();

	return 0;
};