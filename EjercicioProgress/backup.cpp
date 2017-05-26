#include "stdafx.h"  //________________________________________ EjercicioProgress.cpp
#include "EjercicioProgress.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioProgress app;
	return app.BeginDialog(IDI_EjercicioProgress, hInstance);
}

void EjercicioProgress::Window_Open(Win::Event& e)
{
	//________________________________________________________ pb1
	pb1.SetRange(1, 50);
	pb1.Position = 25;
	pb1.StepIt();// Move it to 26

}

void EjercicioProgress::btStart_Click(Win::Event& e)
{
}

void EjercicioProgress::btStop_Click(Win::Event& e)
{
}

