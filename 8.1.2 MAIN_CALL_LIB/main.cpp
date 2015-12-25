#include "afxwin.h"
#include "..\8.2 DLL\8.2 DLL.h"

#pragma comment(lib, "..\\Debug\\8.2 DLL.lib")

class CMyWinApp :public CWinApp{
public:
	CMyWinApp(){}

	virtual BOOL InitInstance(){
		std::wstring MsgFromDll;						// в эту переменную будет помещено сообщение из функции DLL
		CMy82DLL* classObj = Create();
		
		if (classObj == NULL){
			AfxMessageBox(L"No class object");
			return FALSE;
		};

		MsgFromDll = L"From class using .lib:\n";
		classObj->getDrives(&MsgFromDll);
		AfxMessageBox(const_cast<TCHAR*>(MsgFromDll.c_str()));		// снимаем константность и выводим в MessageBox

		return TRUE;
	};
};

CMyWinApp mainApp;