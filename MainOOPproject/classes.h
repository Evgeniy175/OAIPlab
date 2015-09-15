#include "stdafx.h"
#include <iostream>

class quadrilateral
{
private:
	short typeOfQuad; // ��� ��������������� ����� enum (0 - �������������)
	float firstSize; // ������ ��������������� ��� ����� 1-� ��������� �����
	float secondSize; // ������ ��������������� ��� ����� 2-� ��������� �����

public:
	enum typeOfQuadrilateral { RECTANGLE, FOURSQUARE, RHOMBUS };

	void setType(short type_)
	{
		this->typeOfQuad = type_;
	};

	void setFirstSize(float firstSize_)
	{
		this->firstSize = firstSize_;
	};

	void setSecondSize(float secondSize_)
	{
		this->secondSize = secondSize_;
	};

	short getType()
	{
		return this->typeOfQuad;
	};

	float getFirstSize()
	{
		return this->firstSize;
	};

	float getSecondSize()
	{
		return this->secondSize;
	};
	
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
	arrOfQuadrangles(const arrOfQuadrangles& copy); // ����������� �����������
	float areaOfQuadrangle(quadrilateral quadrangle); // ������� ������
	float perimeterOfQuadrangle(quadrilateral quadrangle); // �������� ������
	void showMaxVal(); // ����� � ����� ������������ �����
	~arrOfQuadrangles(); // ����������
};