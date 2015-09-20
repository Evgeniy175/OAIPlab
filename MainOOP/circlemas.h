#pragma once
#include <iostream>
#include "circle.h"
#define maxColOfCircles 20

class CircleMas
{
	Circle* circleMas;//указатель на массив
	int kolOfCircles;//количество элементов массива
	
public:

	CircleMas();//конструктор	

	CircleMas(CircleMas&);//конструтор копирования

	CircleMas(int kol,Circle mas,...);//конструктор для создания массива из kol-параметров
	 
	~CircleMas();//деструктор



	void setCircleMas(Circle* Mas);//установить значение указателя на массив

	void setKolOfCircles(int kol);//установить количество кругов

	Circle* getCircleMas();//получить указатель на массив

	int getKolOfCircles();//получить количество кругов



	void circleMasAddCircle(Circle &circ);//добавить круг в массив
	
	void circleWithCentersOnOneLine();//вывести окружности с центрами на одной линии

	Circle* maxSqCircle(); //возвращает указатель на окружность максимального радиуса

	Circle* minSqCircle();//возвращает указатель на окружность минимального радиуса

	void circlesInFirstQuarter();//вывод окружностей из первой четверти

	void printMaxSqCircle();//выводит окружность максимального радиуса

	void printMinSqCircle();//выводит окружность минимального радиуса

};