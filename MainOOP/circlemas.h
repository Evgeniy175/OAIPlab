#pragma once
#include <iostream>
#include "circle.h"
#define maxColOfCircles 20

class CircleMas
{
	Circle* circleMas;//��������� �� ������
	int kolOfCircles;//���������� ��������� �������
	
public:

	CircleMas();//�����������	

	CircleMas(CircleMas&);//���������� �����������

	CircleMas(int kol,Circle mas,...);//����������� ��� �������� ������� �� kol-����������
	 
	~CircleMas();//����������



	void setCircleMas(Circle* Mas);//���������� �������� ��������� �� ������

	void setKolOfCircles(int kol);//���������� ���������� ������

	Circle* getCircleMas();//�������� ��������� �� ������

	int getKolOfCircles();//�������� ���������� ������



	void circleMasAddCircle(Circle &circ);//�������� ���� � ������
	
	void circleWithCentersOnOneLine();//������� ���������� � �������� �� ����� �����

	Circle* maxSqCircle(); //���������� ��������� �� ���������� ������������� �������

	Circle* minSqCircle();//���������� ��������� �� ���������� ������������ �������

	void circlesInFirstQuarter();//����� ����������� �� ������ ��������

	void printMaxSqCircle();//������� ���������� ������������� �������

	void printMinSqCircle();//������� ���������� ������������ �������

};