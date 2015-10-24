#include "stdafx.h"
#include "classes.h"
#include "ShowLR.h"
#include <iostream>

#pragma comment(lib, "..//Debug//2. OOP3R.lib")				// 3-5 лаба Рябченко
#pragma comment(lib, "..//Debug//3. MainOOP.lib")			// 1-2 лаба Плеханов
#pragma comment(lib, "..//Debug//4. OOP6R.lib")				// 6   лаба Рябченко


int _tmain(int argc, _TCHAR* argv[])
{
	short switchVal = 0;
	setlocale(LC_ALL, "Rus");
	
	while (true)
	{
		if (switchVal != 0) system("pause");
		system("cls");
		std::cout << "1. Лабораторная работа №1-2. Программирование объектов и классов" << std::endl;
		std::cout << "2. Лабораторная работа №3-5. Наследование и полиморфизм. Абстрактные классы" << std::endl;
		std::cout << "3. Лабораторная работа №6. Перегрузка операций" << std::endl;
		std::cout << "0. Выход" << std::endl;
		std::cout << "Ваш выбор: ";
		std::cin >> switchVal;

		switch (switchVal)
		{
		case 1:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;

			switch (switchVal)
			{
			case 1:
				std::cout << std::endl;
				show1and2LabRyabchenko();
				break;

			case 2:
				std::cout << std::endl;
				show1and2LabPlehanow();
				break;

			default: break;
			};

			break;


		case 2:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;

			switch (switchVal)
			{
			case 1:
				std::cout << std::endl;
				show3and4LabRyabchenko();
				break;

			case 2:
				std::cout << std::endl;
				break;

			default: break;
			};

			break;


		case 3:
			std::cout << std::endl << "1. Рябченко" << std::endl << "2. Плеханов" << std::endl;
			std::cout << "Ваш выбор: ";
			std::cin >> switchVal;

			switch (switchVal)
			{
			case 1:
				std::cout << std::endl;
				show6LabRyabchenko();
				break;

			case 2:
				std::cout << std::endl;
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