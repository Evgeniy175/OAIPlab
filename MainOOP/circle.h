#pragma once
#include <iostream>
#include <cmath>
#define maxXYR 100
#define minXY -100
#define minRadius 0

class Circle
{
	friend class CircleMas;
	
	int x;//���������� x
	int y;//���������� y
	int radius;//������
	
public:

	Circle(); //�����������	

	~Circle(); //����������

	Circle(const Circle&);//����������� �����������

	Circle(int x,int y,int radius); //����������� �� 3 ����������
	
	float circleSquare();//������� �����

	float circleLenght();//����� �����

	void setRadius(int radius);//���������� �������� �������

	void setX(int y);//���������� �������� y

	void setY(int x);//���������� �������� x

	int getRadius();//�������� �������� �������

	int getX();//�������� �������� x

	int getY();//�������� �������� y
};