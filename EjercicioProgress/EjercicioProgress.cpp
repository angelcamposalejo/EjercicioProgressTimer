#include "stdafx.h"  //________________________________________ EjercicioProgress.cpp
#include "EjercicioProgress.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioProgress app;
	return app.BeginDialog(IDI_EjercicioProgress, hInstance);
}

void EjercicioProgress::Window_Open(Win::Event& e)
{
	//________________________________________________________ pb1
	pb1.SetRange(1, 100);
	pb1.Position =0;
	//pb1.StepIt();// Move it to 26

}

void EjercicioProgress::btStart_Click(Win::Event& e)
{
	this->timer.Set(1, 1000);
}

void EjercicioProgress::btStop_Click(Win::Event& e)
{
	this->timer.Kill(1);
}

void EjercicioProgress::Window_Timer(Win::Event& e)
{
	//this->timer.Set(1, 1000); // To set timer 1, call this function outside the timer event
	//this->timer.Kill(1); // To stop timer 1, call this function outside the timer event
	switch (e.wParam)
	{
	case 0: //________ Timer 0
		break;
	case 1: //________ Timer 1
		pb1.Position++;
		break;
	}
}

