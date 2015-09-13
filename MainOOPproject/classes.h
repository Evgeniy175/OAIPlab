#include "stdafx.h"
#include <iostream>

class quadrilateral
{
public:
	enum typeOfQuadrilateral { RECTANGLE, FOURSQUARE, RHOMBUS };

	short typeOfQuad; // ��� ��������������� ����� enum (0 - �������������)
	float firstSize; // ������ ��������������� ��� ����� 1-� ��������� �����
	float secondSize; // ������ ��������������� ��� ����� 2-� ��������� �����
	float areaOfQuadrilateral; // ������� 
	float perimeterOfQuadrilateral; // �������� ���������������

	quadrilateral(); // ����������� �� ���������
	quadrilateral(short TYPE, float FIRSTSIZE, float SECONDSIZE); // ����������� ��� ���������� �������
	quadrilateral(quadrilateral const& copy); // ����������� �����������
};

class arrOfQuadrangles
{
public:	
	quadrilateral* mainQuadrangleVar; // ������ �������
	int sizeOfArray; // ���������� ��������� � �������
	arrOfQuadrangles(); // ����������� �� ���������
	arrOfQuadrangles(int count, quadrilateral firstQuadrangle, ...); // ����������� ��� ���������� �������
	arrOfQuadrangles(arrOfQuadrangles const& copy); // ����������� �����������
	float areaOfQuadrangle(quadrilateral quadrangle); // ������� ������
	float perimeterOfQuadrangle(quadrilateral quadrangle); // �������� ������
	void showMaxVal(); // ����� � ����� ������������ �����
	~arrOfQuadrangles(); // ����������
};