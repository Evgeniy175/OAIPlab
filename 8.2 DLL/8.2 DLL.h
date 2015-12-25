// Приведенный ниже блок ifdef - это стандартный метод создания макросов, упрощающий процедуру 
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа MY82DLL_EXPORTS,
// в командной строке. Этот символ не должен быть определен в каком-либо проекте
// использующем данную DLL. Благодаря этому любой другой проект, чьи исходные файлы включают данный файл, видит 
// функции MY82DLL_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
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