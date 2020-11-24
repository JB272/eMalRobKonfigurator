
#include <stdio.h>
#include <iostream>
#include <string>
#include <Windows.h>

#include "MyForm.h"

using namespace System;
using namespace System ::Windows::Forms;
std::vector <int> ComPorts;

[STAThreadAttribute]



void main(array<String^>^ args) {
	
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	eMalRobKonfiguratorV20201117::MyForm frm;
	Application::Run(% frm);

}




