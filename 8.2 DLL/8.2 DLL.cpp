#include "stdafx.h"
#include "8.2 DLL.h"

MY82DLL_API void GetDrives(std::wstring* str){
	char buff;
	std::bitset<ALPABET_SIZE> MyDrives = GetLogicalDrives();

	*str += L"Logical Drives:";
	for (int i = 0; i < ALPABET_SIZE; i++){
		if (MyDrives[i]){			// true - диск с таким именем присутствует
			*str += '\n';			// новая строка
			buff = i + 0x41;		// смещение на заглавные буквы
			*str += buff;			// добавляем имя диска в выходное сообщение
			*str += L":\\  ";
		};
	};
	return;
};

class GDImpl : public CMy82DLL{
	void getDrives(std::wstring* str){
		GetDrives(str);
		return;
	};
};

CMy82DLL* Create(){
	return (new GDImpl());
}