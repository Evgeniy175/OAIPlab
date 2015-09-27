#ifndef CLASSES_CHECK
#define CLASSES_CHECK

#include "stdafx.h"
#include <iostream>

class quadrilateral
{

public:
	enum typeOfQuadrilateral { RECTANGLE, FOURSQUARE, RHOMBUS };

	short getType();
	double getFirstSize();
	double getSecondSize();

	void setType(short type_);
	void setFirstSize(double firstSize_);
	void setSecondSize(double secondSize_);

	quadrilateral();															// конструктор по умолчанию
	quadrilateral(short TYPE, double FIRSTSIZE, double SECONDSIZE);				// конструктор для заполнения данными
	quadrilateral(quadrilateral const& copy);									// конструктор копирования

private:
	short typeOfQuad;															// тип четырёхугольника через enum (0 - прямоугольник)
	double firstSize;															// ширина четырёхугольника или длина 1-й диагонали ромба
	double secondSize;															// высота четырёхугольника или длина 2-й диагонали ромба
};

class arrOfQuadrangles
{

public:
	quadrilateral* mainQuadrangleVar;											// массив классов
	int sizeOfArray;															// количество элементов в массиве
	arrOfQuadrangles();															// конструктор по умолчанию
	arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...);			// конструктор для заполнения данными
	arrOfQuadrangles(const arrOfQuadrangles& copy);								// конструктор копирования
	double areaOfQuadrangle(quadrilateral quadrangle);							// площадь фигуры
	double perimeterOfQuadrangle(quadrilateral quadrangle);						// периметр фигуры
	void showMaxVal();															// поиск и вывод максимальных фигур
	~arrOfQuadrangles();														// деструктор
};

#endif