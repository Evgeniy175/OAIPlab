#include "Cartoon.h"
#include <iostream>

class TV : public Cartoon
{
private:
	Cartoon* arrOfTVprogram;	// ������ ��������
	int size;					// ������ �������

public:
	TV();
	TV(int size_, Cartoon firstVar, ...);

	char* getTVtime(int i);			// ���������� ����� ������� ���������
	char* getThisTV(int i);			// ���������� ������� ���������
	char* getOtherTV(int i);		// ���������� ����������

	void showTVprogram();			// ������� ������� ���������
};