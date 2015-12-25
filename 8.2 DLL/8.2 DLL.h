// ����������� ���� ���� ifdef - ��� ����������� ����� �������� ��������, ���������� ��������� 
// �������� �� ��������� DLL. ��� ����� ������ DLL �������������� � �������������� ������� MY82DLL_EXPORTS,
// � ��������� ������. ���� ������ �� ������ ���� ��������� � �����-���� �������
// ������������ ������ DLL. ��������� ����� ����� ������ ������, ��� �������� ����� �������� ������ ����, ����� 
// ������� MY82DLL_API ��� ��������������� �� DLL, ����� ��� ������ DLL ����� �������,
// ������������ ������ ��������, ��� ����������������.
#ifdef MY82DLL_EXPORTS
#define MY82DLL_API __declspec(dllexport)
#else
#define MY82DLL_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>
#include <bitset>

#define ALPABET_SIZE 26

class MY82DLL_API CMy82DLL{
public:
	virtual void getDrives(std::wstring* str) = 0;
};

extern "C" MY82DLL_API void GetDrives(std::wstring* str);
extern "C" MY82DLL_API CMy82DLL* Create();