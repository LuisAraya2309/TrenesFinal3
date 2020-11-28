#pragma once

namespace SistemaTrenes3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class VentanaAdmin : public System::Windows::Forms::Form
	{
	public:
		VentanaAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TabPage^ tabPage15;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage16;
	private: System::Windows::Forms::TabPage^ tabPage17;
	private: System::Windows::Forms::TabPage^ tabPage18;
	private: System::Windows::Forms::TabPage^ tabPage19;
	private: System::Windows::Forms::TabPage^ tabPage20;
	private: System::Windows::Forms::TabPage^ tabPage21;
	private: System::Windows::Forms::TabControl^ tabControl5;
	private: System::Windows::Forms::TabPage^ tabPage22;
	private: System::Windows::Forms::TabPage^ tabPage23;
	private: System::Windows::Forms::TabPage^ tabPage24;
	private: System::Windows::Forms::TabPage^ tabPage25;
	private: System::Windows::Forms::TabPage^ tabPage26;
	private: System::Windows::Forms::TabPage^ tabPage27;
	private: System::Windows::Forms::TabControl^ tabControl6;
	private: System::Windows::Forms::TabPage^ tabPage28;
	private: System::Windows::Forms::TabPage^ tabPage29;
	private: System::Windows::Forms::TabPage^ tabPage30;
	private: System::Windows::Forms::TabPage^ tabPage31;
	private: System::Windows::Forms::TabControl^ tabControl7;
	private: System::Windows::Forms::TabPage^ tabPage32;
	private: System::Windows::Forms::TabPage^ tabPage33;
	private: System::Windows::Forms::TabPage^ tabPage34;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage28 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage29 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage30 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage31 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl7 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage32 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage33 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage34 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage31->SuspendLayout();
			this->tabControl7->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage31);
			this->tabControl1->Location = System::Drawing::Point(2, 8);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1089, 683);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1081, 657);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Inicio";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1081, 657);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Inserciones";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Controls->Add(this->tabPage13);
			this->tabControl3->Controls->Add(this->tabPage14);
			this->tabControl3->Controls->Add(this->tabPage15);
			this->tabControl3->Location = System::Drawing::Point(2, 2);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(1079, 659);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1071, 633);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"País";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tabPage10
			// 
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1071, 633);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Ciudad";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1071, 633);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Conexión";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// tabPage12
			// 
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1071, 633);
			this->tabPage12->TabIndex = 3;
			this->tabPage12->Text = L"Tipo de tren";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// tabPage13
			// 
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(1071, 633);
			this->tabPage13->TabIndex = 4;
			this->tabPage13->Text = L"Ruta";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(1071, 633);
			this->tabPage14->TabIndex = 5;
			this->tabPage14->Text = L"Tren";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage15
			// 
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(1071, 633);
			this->tabPage15->TabIndex = 6;
			this->tabPage15->Text = L"Registros";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1081, 657);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Modificaciones";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage16);
			this->tabControl4->Controls->Add(this->tabPage17);
			this->tabControl4->Controls->Add(this->tabPage18);
			this->tabControl4->Controls->Add(this->tabPage19);
			this->tabControl4->Controls->Add(this->tabPage20);
			this->tabControl4->Controls->Add(this->tabPage21);
			this->tabControl4->Location = System::Drawing::Point(0, 0);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(1081, 661);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage16
			// 
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(1073, 635);
			this->tabPage16->TabIndex = 0;
			this->tabPage16->Text = L"Precio";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// tabPage17
			// 
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Padding = System::Windows::Forms::Padding(3);
			this->tabPage17->Size = System::Drawing::Size(1073, 635);
			this->tabPage17->TabIndex = 1;
			this->tabPage17->Text = L"Tiempo";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// tabPage18
			// 
			this->tabPage18->Location = System::Drawing::Point(4, 22);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(1073, 635);
			this->tabPage18->TabIndex = 2;
			this->tabPage18->Text = L"Numero de asientos";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// tabPage19
			// 
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(1073, 635);
			this->tabPage19->TabIndex = 3;
			this->tabPage19->Text = L"Ruta";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// tabPage20
			// 
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(1073, 635);
			this->tabPage20->TabIndex = 4;
			this->tabPage20->Text = L"Tren";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// tabPage21
			// 
			this->tabPage21->Location = System::Drawing::Point(4, 22);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Padding = System::Windows::Forms::Padding(3);
			this->tabPage21->Size = System::Drawing::Size(1073, 635);
			this->tabPage21->TabIndex = 5;
			this->tabPage21->Text = L"Estado migratorio";
			this->tabPage21->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1081, 657);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Eliminaciones";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage22);
			this->tabControl5->Controls->Add(this->tabPage23);
			this->tabControl5->Controls->Add(this->tabPage24);
			this->tabControl5->Controls->Add(this->tabPage25);
			this->tabControl5->Controls->Add(this->tabPage26);
			this->tabControl5->Location = System::Drawing::Point(0, 0);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(1081, 657);
			this->tabControl5->TabIndex = 0;
			// 
			// tabPage22
			// 
			this->tabPage22->Location = System::Drawing::Point(4, 22);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Padding = System::Windows::Forms::Padding(3);
			this->tabPage22->Size = System::Drawing::Size(1073, 631);
			this->tabPage22->TabIndex = 0;
			this->tabPage22->Text = L"País";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// tabPage23
			// 
			this->tabPage23->Location = System::Drawing::Point(4, 22);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Padding = System::Windows::Forms::Padding(3);
			this->tabPage23->Size = System::Drawing::Size(1073, 631);
			this->tabPage23->TabIndex = 1;
			this->tabPage23->Text = L"Ciudad";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// tabPage24
			// 
			this->tabPage24->Location = System::Drawing::Point(4, 22);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Padding = System::Windows::Forms::Padding(3);
			this->tabPage24->Size = System::Drawing::Size(1073, 631);
			this->tabPage24->TabIndex = 2;
			this->tabPage24->Text = L"Conexiones";
			this->tabPage24->UseVisualStyleBackColor = true;
			// 
			// tabPage25
			// 
			this->tabPage25->Location = System::Drawing::Point(4, 22);
			this->tabPage25->Name = L"tabPage25";
			this->tabPage25->Padding = System::Windows::Forms::Padding(3);
			this->tabPage25->Size = System::Drawing::Size(1073, 631);
			this->tabPage25->TabIndex = 3;
			this->tabPage25->Text = L"Tren";
			this->tabPage25->UseVisualStyleBackColor = true;
			// 
			// tabPage26
			// 
			this->tabPage26->Location = System::Drawing::Point(4, 22);
			this->tabPage26->Name = L"tabPage26";
			this->tabPage26->Padding = System::Windows::Forms::Padding(3);
			this->tabPage26->Size = System::Drawing::Size(1073, 631);
			this->tabPage26->TabIndex = 4;
			this->tabPage26->Text = L"Ruta";
			this->tabPage26->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->tabControl2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1081, 657);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Consultas";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage27);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1078, 654);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1070, 628);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Paises-Ciudades-Conexiones";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1070, 628);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Trenes";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// tabPage27
			// 
			this->tabPage27->Location = System::Drawing::Point(4, 22);
			this->tabPage27->Name = L"tabPage27";
			this->tabPage27->Padding = System::Windows::Forms::Padding(3);
			this->tabPage27->Size = System::Drawing::Size(1070, 628);
			this->tabPage27->TabIndex = 2;
			this->tabPage27->Text = L"Rutas";
			this->tabPage27->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tabControl6);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1081, 657);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Reportes";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabPage28);
			this->tabControl6->Controls->Add(this->tabPage29);
			this->tabControl6->Controls->Add(this->tabPage30);
			this->tabControl6->Location = System::Drawing::Point(3, 3);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(1082, 658);
			this->tabControl6->TabIndex = 0;
			// 
			// tabPage28
			// 
			this->tabPage28->Location = System::Drawing::Point(4, 22);
			this->tabPage28->Name = L"tabPage28";
			this->tabPage28->Padding = System::Windows::Forms::Padding(3);
			this->tabPage28->Size = System::Drawing::Size(1074, 632);
			this->tabPage28->TabIndex = 0;
			this->tabPage28->Text = L"País";
			this->tabPage28->UseVisualStyleBackColor = true;
			// 
			// tabPage29
			// 
			this->tabPage29->Location = System::Drawing::Point(4, 22);
			this->tabPage29->Name = L"tabPage29";
			this->tabPage29->Padding = System::Windows::Forms::Padding(3);
			this->tabPage29->Size = System::Drawing::Size(1074, 632);
			this->tabPage29->TabIndex = 1;
			this->tabPage29->Text = L"Usuario";
			this->tabPage29->UseVisualStyleBackColor = true;
			// 
			// tabPage30
			// 
			this->tabPage30->Location = System::Drawing::Point(4, 22);
			this->tabPage30->Name = L"tabPage30";
			this->tabPage30->Padding = System::Windows::Forms::Padding(3);
			this->tabPage30->Size = System::Drawing::Size(1074, 632);
			this->tabPage30->TabIndex = 2;
			this->tabPage30->Text = L"Tren";
			this->tabPage30->UseVisualStyleBackColor = true;
			// 
			// tabPage31
			// 
			this->tabPage31->Controls->Add(this->tabControl7);
			this->tabPage31->Location = System::Drawing::Point(4, 22);
			this->tabPage31->Name = L"tabPage31";
			this->tabPage31->Padding = System::Windows::Forms::Padding(3);
			this->tabPage31->Size = System::Drawing::Size(1081, 657);
			this->tabPage31->TabIndex = 6;
			this->tabPage31->Text = L"Reservacion";
			this->tabPage31->UseVisualStyleBackColor = true;
			// 
			// tabControl7
			// 
			this->tabControl7->Controls->Add(this->tabPage32);
			this->tabControl7->Controls->Add(this->tabPage33);
			this->tabControl7->Controls->Add(this->tabPage34);
			this->tabControl7->Location = System::Drawing::Point(3, 3);
			this->tabControl7->Name = L"tabControl7";
			this->tabControl7->SelectedIndex = 0;
			this->tabControl7->Size = System::Drawing::Size(1078, 651);
			this->tabControl7->TabIndex = 0;
			// 
			// tabPage32
			// 
			this->tabPage32->Location = System::Drawing::Point(4, 22);
			this->tabPage32->Name = L"tabPage32";
			this->tabPage32->Padding = System::Windows::Forms::Padding(3);
			this->tabPage32->Size = System::Drawing::Size(1070, 625);
			this->tabPage32->TabIndex = 0;
			this->tabPage32->Text = L"Abrir Ventanilla";
			this->tabPage32->UseVisualStyleBackColor = true;
			// 
			// tabPage33
			// 
			this->tabPage33->Location = System::Drawing::Point(4, 22);
			this->tabPage33->Name = L"tabPage33";
			this->tabPage33->Padding = System::Windows::Forms::Padding(3);
			this->tabPage33->Size = System::Drawing::Size(1070, 625);
			this->tabPage33->TabIndex = 1;
			this->tabPage33->Text = L"Venta de Tiquetes";
			this->tabPage33->UseVisualStyleBackColor = true;
			// 
			// tabPage34
			// 
			this->tabPage34->Location = System::Drawing::Point(4, 22);
			this->tabPage34->Name = L"tabPage34";
			this->tabPage34->Padding = System::Windows::Forms::Padding(3);
			this->tabPage34->Size = System::Drawing::Size(1070, 625);
			this->tabPage34->TabIndex = 2;
			this->tabPage34->Text = L"Reservacion";
			this->tabPage34->UseVisualStyleBackColor = true;
			// 
			// VentanaAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1089, 690);
			this->Controls->Add(this->tabControl1);
			this->Name = L"VentanaAdmin";
			this->Text = L"Administrador";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage31->ResumeLayout(false);
			this->tabControl7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
