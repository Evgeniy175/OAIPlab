#include "afxwin.h"
#include "..\8.2 DLL\8.2 DLL.h"

typedef void(*pGetDrivesType)(std::wstring*);
typedef CMy82DLL*(*pCreateType)();

class CMyWinApp :public CWinApp{
public:
	CMyWinApp(){}

	virtual BOOL InitInstance(){
		std::wstring MsgFromDll;						// в эту переменную будет помещено сообщение из функции DLL
		CMy82DLL* classObj;
		pGetDrivesType pGetDrives;
		pCreateType pCreate;

		HMODULE hDll = AfxLoadLibrary(L"8.2 DLL.dll");	// загрузка DLL

		if (hDll == NULL){
			AfxMessageBox(L"Error on DLL load");
			FreeModule(hDll);										// освобождает память, которую занимаемает DLL
			return FALSE;
		};

		AfxMessageBox(L"DLL loaded successfully");

		(FARPROC&)pGetDrives = GetProcAddress(hDll, "GetDrives");	// получаем адрес функции

		if (pGetDrives == NULL){
			AfxMessageBox(L"Unable to load function GetDrives from DLL");
			FreeModule(hDll);										// освобождает память, которую занимаемает DLL
			return FALSE;
		};

		AfxMessageBox(L"Calling function");
		MsgFromDll = L"From dll:\n";
		pGetDrives(&MsgFromDll);									// вызов функции
		AfxMessageBox(const_cast<TCHAR*>(MsgFromDll.c_str()));		// снимаем константность и выводим в MessageBox
		
		(FARPROC&)pCreate = GetProcAddress(hDll, "Create");			// получаем адрес функции

		if (pCreate == NULL){
			AfxMessageBox(L"Unable to load function Create from DLL");
			FreeModule(hDll);										// освобождает память, которую занимаемает DLL
			return FALSE;
		};

		classObj = pCreate();
		MsgFromDll = L"From class:\n";
		classObj->getDrives(&MsgFromDll);
		AfxMessageBox(const_cast<TCHAR*>(MsgFromDll.c_str()));		// снимаем константность и выводим в MessageBox

		FreeModule(hDll);											// освобождает память, которую занимаемает DLL

		return TRUE;
	};
};

CMyWinApp mainApp;