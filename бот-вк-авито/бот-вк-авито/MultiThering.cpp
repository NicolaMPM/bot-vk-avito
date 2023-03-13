#include "Экспорт и импорт.cpp"
#pragma once 

using namespace std;
using namespace Interface;

[STAThreadAttribute]
int main(cli::array<String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interface::MyForm form;
	Application::Run(% form);

	return 0;
}