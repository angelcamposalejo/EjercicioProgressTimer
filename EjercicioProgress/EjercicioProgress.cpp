#include "stdafx.h"  //________________________________________ EjercicioProgress.cpp
#include "EjercicioProgress.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioProgress app;
	return app.BeginDialog(IDI_EjercicioProgress, hInstance);
}

void EjercicioProgress::Window_Open(Win::Event& e)
{

	//________________________________________________________ tank1
	tank1.SetRange(0.0, 100.0);
	tank1.Level = 80.0;
	tank1.TankColor = RGB(0, 160, 0);
}


void EjercicioProgress::Window_Timer(Win::Event& e)
{
	//this->timer.Set(1, 1000); // To set timer 1, call this function outside the timer event
	//this->timer.Kill(1); // To stop timer 1, call this function outside the timer event
	
}

void EjercicioProgress::btSubir_Click(Win::Event& e)
{
	tank1.Level++;
}

void EjercicioProgress::btBajar_Click(Win::Event& e)
{
	tank1.Level--;
}

