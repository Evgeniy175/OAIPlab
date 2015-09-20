#pragma once
#include <iostream>
#include <cmath>
#define maxXYR 100
#define minXY -100
#define minRadius 0

class Circle
{
	friend class CircleMas;
	
	int x;//координата x
	int y;//координата y
	int radius;//радиус
	
public:

	Circle(); //конструктор	

	~Circle(); //деструктор

	Circle(const Circle&);//конструктор копирования

	Circle(int x,int y,int radius); //конструктор от 3 параметров
	
	float circleSquare();//площадь круга

	float circleLenght();//длина круга

	void setRadius(int radius);//установить значение радиуса

	void setX(int y);//установить значение y

	void setY(int x);//установить значение x

	int getRadius();//получить значение радиуса

	int getX();//получить значение x

	int getY();//получить значение y
};