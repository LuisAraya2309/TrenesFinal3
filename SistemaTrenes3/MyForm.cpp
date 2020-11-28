#include "VentanaInicial.h"
#include "VentanaUsuario1.h"
#include "VentanaAdmin.h"

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
    SistemaTrenes3::VentanaUsuario1 form2;
    Application::Run(% form2);

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SistemaTrenes3::VentanaAdmin form3;
    Application::Run(% form3);
}