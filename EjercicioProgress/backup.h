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
	Win::Button btSubir;
	Win::Button btStop;
	Win::Tank tank1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(571);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(215);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioProgress";
		btSubir.Create(NULL, L"Subir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 441, 11, 114, 28, hWnd, 1000);
		btStop.Create(NULL, L"Stop", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 441, 45, 123, 28, hWnd, 1001);
		tank1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 31, 14, 382, 194, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btSubir.Font = fontArial014A;
		btStop.Font = fontArial014A;
		tank1.Font = fontArial014A;
	}
	//_________________________________________________
	void btSubir_Click(Win::Event& e);
	void btStop_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Timer(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btSubir.IsEvent(e, BN_CLICKED)) {btSubir_Click(e); return true;}
		if (btStop.IsEvent(e, BN_CLICKED)) {btStop_Click(e); return true;}
		return false;
	}
};
