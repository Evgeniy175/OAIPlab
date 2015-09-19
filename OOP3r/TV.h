#include "Cartoon.h"
#include <iostream>

class TV : public Cartoon
{
private:
	Cartoon* arrOfTVprogram;	// массив программ
	int size;					// размер массива

public:
	TV();
	TV(int size_, Cartoon firstVar, ...);

	char* getTVtime(int i);			// возвращает время текущей программы
	char* getThisTV(int i);			// возвращает текущую программу
	char* getOtherTV(int i);		// возвращает продюссера

	void showTVprogram();			// выводит текущую программу
};