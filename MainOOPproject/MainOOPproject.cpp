#include "stdafx.h"
#include "classes.h"
#include "ShowLR.h"
#include <iostream>

#pragma comment(lib, "..//Debug//2. OOP3R.lib")				// 3-4 ���� ��������
#pragma comment(lib, "..//Debug//3. MainOOP.lib")			// 1-2 ���� ��������


int _tmain(int argc, _TCHAR* argv[])
{
	short switchVal = 0;
	setlocale(LC_ALL, "Rus");
	
	for (;;)
	{
		if (switchVal != 0) system("pause");
		system("cls");
		std::cout << "1. ������������ ������ �1-2. ���������������� �������� � �������" << std::endl;
		std::cout << "2. ������������ ������ �3-4. ������������ � �����������. ����������� ������" << std::endl;
		std::cout << "0. �����" << std::endl;
		std::cout << "��� �����: ";
		std::cin >> switchVal;

		switch (switchVal)
		{
		case 1:
		{
				  std::cout << std::endl << "1. ��������" << std::endl;
				  std::cout << "2. ��������" << std::endl;
				  std::cout << "��� �����: ";
				  std::cin >> switchVal;

				  switch (switchVal)
				  {
				  case 1:
				  {
							std::cout << std::endl;
							show1and2LabRyabchenko();
							break;
				  }
				  case 2:
				  {
							std::cout << std::endl;
							show1and2LabPlehanow();
							break;
				  }
				  default: break;
				  }

				  break;
		}
		case 2:
		{
				  std::cout << std::endl << "1. ��������" << std::endl;
				  std::cout << "2. ��������" << std::endl;
				  std::cout << "��� �����: ";
				  std::cin >> switchVal;

				  switch (switchVal)
				  {
				  case 1:
				  {
							std::cout << std::endl;
							show3and4LabRyabchenko();
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
				  exit(NULL);
		}
		default: break;
		};
	};
	
	system("pause");
	return 0;
};