#include "stdafx.h"
#include "classes.h"
#include "OtherHeadersFromProjects.h"
#include "ShowLR.h"
#include <iostream>

#pragma comment(lib, "..//Debug//OOP3R.lib")			// 3 лаба Рябченко
#pragma comment(lib, "..//Debug//MainOOP.lib")			// 1-2 лаба Плеханов


int _tmain(int argc, _TCHAR* argv[])
{
	short switchVal = 0;
	
	setlocale(LC_ALL, "Rus");
	
	for (;;)
	{
		if (switchVal != 0) system("pause");
		system("cls");
		std::cout << "1. Лабораторная работа №1-2. Программирование объектов и классов" << std::endl;
		std::cout << "2. Лабораторная работа №3. Наследование и полиморфизм" << std::endl;
		std::cout << "0. Выход" << std::endl;
		std::cout << "Ваш выбор: ";
		std::cin >> switchVal;

		switch (switchVal)
		{
		case 1:
		{
				  std::cout << std::endl << "1. Рябченко" << std::endl;
				  std::cout << "2. Плеханов" << std::endl;
				  std::cout << "Ваш выбор: ";
				  std::cin >> switchVal;

				  switch (switchVal)
				  {
				  case 1:
				  {
							std::cout << std::endl;
							Show1LabRyabchenko();
							break;
				  }
				  case 2:
				  {
							std::cout << std::endl;
							Show1LabPlehanow();
							break;
				  }
				  default: break;
				  }

				  break;
		}
		case 2:
		{
				  std::cout << std::endl << "1. Рябченко" << std::endl;
				  std::cout << "2. Плеханов" << std::endl;
				  std::cout << "Ваш выбор: ";
				  std::cin >> switchVal;

				  switch (switchVal)
				  {
				  case 1:
				  {
							std::cout << std::endl;
							Show2LabRyabchenko();
							break;
				  }
				  case 2:
				  {
							std::cout << std::endl;
							break;
				  }
				  default: break;
				  }

				  break;
		}
		case 0:
		{
				  exit(0);
		}
		default: break;
		};
	};
	
	system("pause");
	return 0;
};