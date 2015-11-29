#include "stdafx.h"
#include <iostream>
#include "circle.h"
#include "circlemas.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Circle circle1(1, 6, 6);
	Circle circle2(2, -7, 1);
	Circle circle3(3, 3, 6);

	CircleMas* mas1 = new CircleMas(3, circle1, circle2, circle3);


	mas1->~CircleMas();
	return 0;
}