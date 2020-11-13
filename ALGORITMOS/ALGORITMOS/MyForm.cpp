#include "pch.h"
#include "MyForm.h"
#include <Windows.h>

using namespace ALGORITMOS; // This is your project name

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());

	return 0;

}

