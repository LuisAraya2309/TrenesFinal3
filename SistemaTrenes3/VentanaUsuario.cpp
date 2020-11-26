#include "VentanaUsuario.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SistemaTrenes3::VentanaUsuario form;
    Application::Run(% form);
}