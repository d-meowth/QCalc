#include "MainUI.h"
#include "AboutPage.h"
#include "WelcomePage.h" // Main page. Start here.
#include "MeltingCalc.h"

#include <windows.h>


using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args)
{
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	QCalcUI::WelcomePage form; // QCalcUI::WelcomePage form;
	Application::Run(%form);


	return 0;
}