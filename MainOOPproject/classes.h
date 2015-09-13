#include "stdafx.h"
#include <iostream>

class quadrilateral
{
public:
	enum typeOfQuadrilateral { RECTANGLE, FOURSQUARE, RHOMBUS };

	short typeOfQuad; // тип четырёхугольника через enum (0 - прямоугольник)
	float firstSize; // ширина четырёхугольника или длина 1-й диагонали ромба
	float secondSize; // высота четырёхугольника или длина 2-й диагонали ромба
	float areaOfQuadrilateral; // площадь 
	float perimeterOfQuadrilateral; // периметр четырёхугольника

	quadrilateral(); // конструктор по умолчанию
	quadrilateral(short TYPE, float FIRSTSIZE, float SECONDSIZE); // конструктор для заполнения данными
	quadrilateral(quadrilateral const& copy); // конструктор копирования
};

class arrOfQuadrangles
{
public:	
	quadrilateral* mainQuadrangleVar; // массив классов
	int sizeOfArray; // количество элементов в массиве
	arrOfQuadrangles(); // конструктор по умолчанию
	arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...); // конструктор для заполнения данными
	arrOfQuadrangles(arrOfQuadrangles const& copy); // конструктор копирования
	float areaOfQuadrangle(quadrilateral quadrangle); // площадь фигуры
	float perimeterOfQuadrangle(quadrilateral quadrangle); // периметр фигуры
	void showMaxVal(); // поиск и вывод максимальных фигур
	~arrOfQuadrangles(); // деструктор
};