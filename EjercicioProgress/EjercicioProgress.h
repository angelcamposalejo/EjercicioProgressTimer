#pragma once  //______________________________________ EjercicioProgress.h  
#include "Resource.h"
class EjercicioProgress : public Win::Dialog
{
public:
	EjercicioProgress()
	{
	}
	~EjercicioProgress()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::ProgressBar pb1;
	Win::Button btStart;
	Win::Button btStop;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(422);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(110);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioProgress";
		pb1.Create(NULL, NULL, WS_CHILD | WS_VISIBLE, 18, 14, 397, 44, hWnd, 1000);
		btStart.Create(NULL, L"Start", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 18, 72, 114, 28, hWnd, 1001);
		btStop.Create(NULL, L"Stop", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 277, 75, 123, 28, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btStart.Font = fontArial014A;
		btStop.Font = fontArial014A;
	}
	//_________________________________________________
	void btStart_Click(Win::Event& e);
	void btStop_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Timer(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btStart.IsEvent(e, BN_CLICKED)) { btStart_Click(e); return true; }
		if (btStop.IsEvent(e, BN_CLICKED)) { btStop_Click(e); return true; }
		return false;
	}
};
