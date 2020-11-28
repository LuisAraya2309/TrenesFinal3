#pragma once

namespace SistemaTrenes3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaUsuario
	/// </summary>
	public ref class VentanaUsuario1 : public System::Windows::Forms::Form
	{
	public:
		VentanaUsuario1(void)
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
		~VentanaUsuario1()
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

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ LbConsultarP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ ConsultarNumAsientos;
	private: System::Windows::Forms::Label^ ConsultarTren;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaUsuario1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->LbConsultarP = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->ConsultarNumAsientos = (gcnew System::Windows::Forms::Label());
			this->ConsultarTren = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
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
			this->tabControl1->Location = System::Drawing::Point(2, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1089, 683);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1081, 657);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Inicio";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(34, 513);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(421, 134);
			this->label4->TabIndex = 2;
			this->label4->Text = L"En las siguientes pestañas podrás\r\nconsultar la información disponible \r\nen la ba"
				L"se de datos para realizar\r\ntu viaje.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Forte", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Peru;
			this->label3->Location = System::Drawing::Point(743, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 70);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Usuario";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(645, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 87);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->LbConsultarP);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1081, 657);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Paises";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// LbConsultarP
			// 
			this->LbConsultarP->AutoSize = true;
			this->LbConsultarP->BackColor = System::Drawing::Color::Wheat;
			this->LbConsultarP->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LbConsultarP->Font = (gcnew System::Drawing::Font(L"Forte", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbConsultarP->ForeColor = System::Drawing::Color::SaddleBrown;
			this->LbConsultarP->Location = System::Drawing::Point(344, 96);
			this->LbConsultarP->Name = L"LbConsultarP";
			this->LbConsultarP->Size = System::Drawing::Size(377, 54);
			this->LbConsultarP->TabIndex = 2;
			this->LbConsultarP->Text = L"Consultar Paises";
			this->LbConsultarP->Click += gcnew System::EventHandler(this, &VentanaUsuario1::LbConsultarP_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Wheat;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(475, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lista de paises";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1081, 657);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ciudades";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Olive;
			this->label7->Font = (gcnew System::Drawing::Font(L"Forte", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(595, 99);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(289, 35);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Consultar Ciudades";
			this->label7->Click += gcnew System::EventHandler(this, &VentanaUsuario1::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Olive;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(536, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(2, 25);
			this->label6->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(293, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 32);
			this->textBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Olive;
			this->label5->Font = (gcnew System::Drawing::Font(L"Forte", 30));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(80, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(948, 44);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Ingrese el codigo de pais para consultar las ciudades";
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->textBox3);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1081, 657);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Conexiones";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(478, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 19);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Conexiones";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(28, 325);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(347, 38);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Consultar Conexiones";
			this->label10->Click += gcnew System::EventHandler(this, &VentanaUsuario1::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(28, 157);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(432, 38);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Ingrese el codigo de ciudad";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(35, 232);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(158, 29);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(33, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 29);
			this->textBox2->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label8->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(26, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(395, 38);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ingrese el codigo de pais";
			// 
			// tabPage5
			// 
			this->tabPage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage5.BackgroundImage")));
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->textBox5);
			this->tabPage5->Controls->Add(this->textBox4);
			this->tabPage5->Controls->Add(this->ConsultarNumAsientos);
			this->tabPage5->Controls->Add(this->ConsultarTren);
			this->tabPage5->Controls->Add(this->label13);
			this->tabPage5->Controls->Add(this->label12);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1081, 657);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Trenes";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(64, 413);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 21);
			this->label16->TabIndex = 6;
			this->label16->Text = L"label16";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(13, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(249, 29);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(13, 168);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(249, 29);
			this->textBox4->TabIndex = 4;
			// 
			// ConsultarNumAsientos
			// 
			this->ConsultarNumAsientos->AutoSize = true;
			this->ConsultarNumAsientos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ConsultarNumAsientos->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultarNumAsientos->Location = System::Drawing::Point(561, 61);
			this->ConsultarNumAsientos->Name = L"ConsultarNumAsientos";
			this->ConsultarNumAsientos->Size = System::Drawing::Size(466, 40);
			this->ConsultarNumAsientos->TabIndex = 3;
			this->ConsultarNumAsientos->Text = L"Consultar numero de asientos";
			this->ConsultarNumAsientos->Click += gcnew System::EventHandler(this, &VentanaUsuario1::ConsultarNumAsientos_Click);
			// 
			// ConsultarTren
			// 
			this->ConsultarTren->AutoSize = true;
			this->ConsultarTren->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ConsultarTren->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultarTren->Location = System::Drawing::Point(561, 118);
			this->ConsultarTren->Name = L"ConsultarTren";
			this->ConsultarTren->Size = System::Drawing::Size(240, 40);
			this->ConsultarTren->TabIndex = 2;
			this->ConsultarTren->Text = L"Consultar Tren";
			this->ConsultarTren->Click += gcnew System::EventHandler(this, &VentanaUsuario1::ConsultarTren_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(6, 118);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(388, 38);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Ingrese el codigo de tren";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(500, 38);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ingrese el codigo de tipo de tren";
			// 
			// tabPage6
			// 
			this->tabPage6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage6.BackgroundImage")));
			this->tabPage6->Controls->Add(this->label19);
			this->tabPage6->Controls->Add(this->label18);
			this->tabPage6->Controls->Add(this->textBox8);
			this->tabPage6->Controls->Add(this->textBox7);
			this->tabPage6->Controls->Add(this->textBox6);
			this->tabPage6->Controls->Add(this->label17);
			this->tabPage6->Controls->Add(this->label15);
			this->tabPage6->Controls->Add(this->label14);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1081, 657);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Rutas";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label14->Font = (gcnew System::Drawing::Font(L"Forte", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(17, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(418, 32);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Ingrese el codigo de tipo de tren";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label15->Font = (gcnew System::Drawing::Font(L"Forte", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(17, 122);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(324, 32);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Ingrese el codigo de tren";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label17->Font = (gcnew System::Drawing::Font(L"Forte", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(19, 229);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(328, 32);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Ingrese el codigo de ruta";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->textBox6->Location = System::Drawing::Point(23, 67);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(191, 32);
			this->textBox6->TabIndex = 3;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->textBox7->Location = System::Drawing::Point(25, 172);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(189, 32);
			this->textBox7->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->textBox8->Location = System::Drawing::Point(23, 276);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(191, 32);
			this->textBox8->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"Forte", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label18->Location = System::Drawing::Point(12, 425);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(392, 34);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Consultar las rutas de un tren";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::MediumAquamarine;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"Forte", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label19->Location = System::Drawing::Point(12, 329);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(403, 34);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Consultar el precio de una ruta";
			// 
			// VentanaUsuario1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1089, 690);
			this->Controls->Add(this->tabControl1);
			this->Name = L"VentanaUsuario1";
			this->Text = L"VentanaUsuario";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: System::Void LbConsultarP_Click(System::Object^ sender, System::EventArgs^ e) {
			label2->Text = "Calvo\n manco\n Calvo\n manco\n";
		}

		private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
			label6->Text = "Praga\nVenecia\nMadrid\nBerlin\nBarcelona\nGemenos\nMilan\nParis\n";
		}

		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
			label11->Text = "conexion: 2910, pais destino Francia, ciudad destino Gemenos, duracion 8 horas \nconexion: 7855, pais destino Republica Checa, ciudad destino Praga, duracion 4 horas\nconexion: 1321, pais destino España, ciudad destino Madrid, duracion 3 horas";
		}


		private: System::Void ConsultarTren_Click(System::Object^ sender, System::EventArgs^ e) {
			label16->Text = "Trenes del tipo de tren 01\n1236, Meembe\n2756, Thungsten";
		}

		private: System::Void ConsultarNumAsientos_Click(System::Object^ sender, System::EventArgs^ e) {
			label16->Text = "El tren Meembe tiene 50 asientos disponibles";
		}
};
}
