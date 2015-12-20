#include "afxwin.h"

#define FIRST_TIMER_ID	1		// ид первого таймера
#define SECOND_TIMER_ID	2		// ид второго таймера
#define CYCLES_NUMBER	6		// количество циклов (-1)
#define PAUSE			3000	// сколько мс пауза
#define OFFSET_X		30		// смещение Х
#define OFFSET_Y		30		// смещение У
#define INIT_X			50		// начальное значение Х
#define INIT_Y			50		// начальное значение У

int x;
int y;

class CMyMainWnd : public CFrameWnd{
public:
	CMyMainWnd(){
		Create(NULL, L"My title");
	}

	afx_msg void OnRButtonDown(UINT, CPoint);
	afx_msg void OnLButtonDown(UINT, CPoint);
	afx_msg void OnKeyDown(UINT, UINT, UINT);
	afx_msg void OnTimer(UINT_PTR);
	DECLARE_MESSAGE_MAP()

	~CMyMainWnd(){}
};

BEGIN_MESSAGE_MAP(CMyMainWnd, CFrameWnd)
	ON_WM_RBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

class CMyApp : public CWinApp{
public:
	CMyApp(){};

	virtual BOOL InitInstance(){
		m_pMainWnd = new CMyMainWnd();
		m_pMainWnd->ShowWindow(SW_SHOW);
		return TRUE;
	};
};

CMyApp theApp;

void CMyMainWnd::OnRButtonDown(UINT, CPoint){
	x = INIT_X;
	y = INIT_Y;
	SetTimer(FIRST_TIMER_ID, PAUSE, NULL);
	SetTimer(SECOND_TIMER_ID, CYCLES_NUMBER*PAUSE, NULL);
};

void CMyMainWnd::OnLButtonDown(UINT, CPoint){
	CClientDC pdc(this);
	pdc.Rectangle(-1, -1, 1920, 1080);
};

void CMyMainWnd::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags){
	CClientDC pdc(this);
	CBrush brush;

	switch (nChar){
	case '1':
		brush.CreateSolidBrush(RGB(0, 100, 200));
		pdc.SelectObject(brush);
		pdc.Ellipse(100, 100, 500, 500);
		break;
	case '2':
		brush.CreateSolidBrush(RGB(100, 200, 100));
		pdc.SelectObject(brush);
		pdc.Ellipse(100, 100, 500, 300);
		break;
	case '3':
		brush.CreateSolidBrush(RGB(200, 100, 100));
		pdc.SelectObject(brush);
		pdc.Rectangle(100, 100, 500, 300);
		break;
	case '4':
		brush.CreateSolidBrush(RGB(200, 100, 0));
		pdc.SelectObject(brush);
		pdc.Rectangle(100, 100, 500, 500);
		break;
	case '5':
		brush.CreateSolidBrush(RGB(200, 200, 200));
		pdc.SelectObject(brush);
		pdc.Pie(100, 100, 350, 350, 100, 600, 300, 300);
		break;
	case '6':
		brush.CreateSolidBrush(RGB(100, 255, 255));
		pdc.SelectObject(brush);
		pdc.Chord(100, 100, 550, 500, 300, 300, 600, 600);
		break;
	default:
		break;
	};
};

void CMyMainWnd::OnTimer(UINT_PTR timerId){
	CClientDC pdc(this);
	CFont font;
	LOGFONT lfont;

 	if (timerId == FIRST_TIMER_ID){
		memset(&lfont, 0, sizeof(LOGFONT));
		lfont.lfHeight = 30;
		lfont.lfWeight = 900;
		lfont.lfItalic = true;
		VERIFY(font.CreateFontIndirectW(&lfont));

		pdc.SetTextColor(RGB(255, 200, 100));
		pdc.SelectObject(font);
 		pdc.TextOut(x, y, L"123");
		
		x += OFFSET_X;
 		y += OFFSET_Y;
 	} 
 	else if (timerId == SECOND_TIMER_ID){
 		KillTimer(FIRST_TIMER_ID);
 		KillTimer(SECOND_TIMER_ID);
 	};
};