#include "MyForm.h"

using namespace System;
using namespace Project53; //pryEjemploFormulario es el nombre del proyecto
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Project53::MyForm());
	//pryEjemploFormulario es el nombre del proyecto y 
	//FormularioPrincipal es el nombre de formulario

}