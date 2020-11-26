#include "VentanaInicial.h"
#include "VentanaUsuario1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String ^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SistemaTrenes3::VentanaInicial form;
    Application::Run(% form);

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SistemaTrenes3::VentanaUsuario form2;
    Application::Run(% form2);
}