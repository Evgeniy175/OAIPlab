#include "stdafx.h"
#include "classes.h"
#include "ShowLR.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	short switchVal = 0;
	setlocale(LC_ALL, "Rus");
	
	while (true)
	{
		if (switchVal != 0) system("pause");
		system("cls");
		std::cout << "1. Лабораторная работа №1-2. Программирование объектов "
			<< "и классов" << std::endl << "2. Лабораторная работа №3-5. "
			<< "Наследование и полиморфизм. Абстрактные классы" << std::endl
			<< "3. Лабораторная работа №6. Перегрузка операций" << std::endl
			<< "4. Лабораторная работа №10. STL. Алгоритмы" << std::endl
			<< "0. Выход" << std::endl << "Ваш выбор: ";
		std::cin >> switchVal;

		switch (switchVal){
		case 1:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;
			std::cout << std::endl;

			switch (switchVal){
			case 1:
				show1and2LabRyabchenko();
				break;

			case 2:
				show1and2LabPlehanow();
				break;

			default: break;
			};

			break;

		case 2:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;
			std::cout << std::endl;

			switch (switchVal){
			case 1:
				show3and4LabRyabchenko();
				break;

			case 2:
				break;

			default: break;
			};

			break;

		case 3:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;
			std::cout << std::endl;

			switch (switchVal){
			case 1:
				show6LabRyabchenko();
				break;

			case 2:
				break;

			default: break;
			};
			break;

		case 4:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;
			std::cout << std::endl;

			switch (switchVal){
			case 1:
				show10LabRyabchenko();
				break;

			case 2:
				break;

			default: break;
			};
			break;

		case 0: exit(NULL);

		default: break;
		};
	};
	system("pause");
	return 0;
};