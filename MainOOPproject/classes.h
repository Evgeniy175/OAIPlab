#include "stdafx.h"
#include <iostream>

#ifndef CLASSES_CHECK
#define CLASSES_CHECK

class quadrilateral
{
private:
	short typeOfQuad;															// ��� ��������������� ����� enum (0 - �������������)
	double firstSize;															// ������ ��������������� ��� ����� 1-� ��������� �����
	double secondSize;															// ������ ��������������� ��� ����� 2-� ��������� �����

public:
	enum typeOfQuadrilateral { RECTANGLE, FOURSQUARE, RHOMBUS };

	void setType(short type_);
	void setFirstSize(double firstSize_);
	void setSecondSize(double secondSize_);
	short getType();
	double getFirstSize();
	double getSecondSize();

	quadrilateral();															// ����������� �� ���������
	quadrilateral(short TYPE, double FIRSTSIZE, double SECONDSIZE);				// ����������� ��� ���������� �������
	quadrilateral(quadrilateral const& copy);									// ����������� �����������
};

class arrOfQuadrangles
{
public:
	quadrilateral* mainQuadrangleVar;											// ������ �������
	int sizeOfArray;															// ���������� ��������� � �������
	arrOfQuadrangles();															// ����������� �� ���������
	arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...);			// ����������� ��� ���������� �������
	arrOfQuadrangles(const arrOfQuadrangles& copy);								// ����������� �����������
	double areaOfQuadrangle(quadrilateral quadrangle);							// ������� ������
	double perimeterOfQuadrangle(quadrilateral quadrangle);						// �������� ������
	void showMaxVal();															// ����� � ����� ������������ �����
	~arrOfQuadrangles();														// ����������
};

#endif