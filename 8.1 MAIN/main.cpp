#include "afxwin.h"
#include "..\8.2 DLL\8.2 DLL.h"

typedef void(*pGetDrivesType)(std::wstring*);
typedef CMy82DLL*(*pCreateType)();

class CMyWinApp :public CWinApp{
public:
	CMyWinApp(){}

	virtual BOOL InitInstance(){
		std::wstring MsgFromDll;		// ��� �������� ���������
		CMy82DLL* classObj;				// ������ ������, ������������ � dll
		pGetDrivesType pGetDrives;		// ����� ������� ��������� �� ������� �� dll
		pCreateType pCreate;			// ����� ������� ��������� �� ������� �� dll

		HMODULE hDll = AfxLoadLibrary(L"8.2 DLL.dll");	// �������� DLL

		if (hDll == NULL){
			AfxMessageBox(L"Error on DLL load");
			FreeModule(hDll);			// ����������� ������, ������� ����������� DLL
			return FALSE;
		};

		AfxMessageBox(L"DLL loaded successfully");

		(FARPROC&)pGetDrives = GetProcAddress(hDll, "GetDrives");	// �������� ����� �������

		if (pGetDrives == NULL){
			AfxMessageBox(L"Unable to load function GetDrives from DLL");
			FreeModule(hDll);	// ���������� ������, ������� �������� ��� dll, ������� dll ����������������
			return FALSE;
		};

		AfxMessageBox(L"Calling function");
		MsgFromDll = L"From dll:\n";
		pGetDrives(&MsgFromDll);						// ����� ������� �� dll
		AfxMessageBox(const_cast<TCHAR*>(MsgFromDll.c_str()));		// ������� ������������� � ������� � MessageBox
		
		(FARPROC&)pCreate = GetProcAddress(hDll, "Create");			// �������� ����� �������

		if (pCreate == NULL){
			AfxMessageBox(L"Unable to load function Create from DLL");
			FreeModule(hDll);	// ���������� ������, ������� �������� ��� dll, ������� dll ����������������
			return FALSE;
		};

		classObj = pCreate();
		MsgFromDll = L"From class:\n";
		classObj->getDrives(&MsgFromDll);
		AfxMessageBox(const_cast<TCHAR*>(MsgFromDll.c_str()));		// ������� ������������� � ������� � MessageBox

		FreeModule(hDll);	// ���������� ������, ������� �������� ��� dll, ������� dll ����������������

		return TRUE;
	};
};

CMyWinApp mainApp;