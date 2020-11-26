#pragma once
#include "VentanaUsuario1.h"
namespace SistemaTrenes3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de VentanaInicial
	/// </summary>
	public ref class VentanaInicial : public System::Windows::Forms::Form
	{

	public:

		VentanaInicial(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaInicial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Identificacion;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btAdmin;

	private: System::Windows::Forms::Button^ btUsuario;

	private: System::Diagnostics::EventLog^ eventLog1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaInicial::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Identificacion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btAdmin = (gcnew System::Windows::Forms::Button());
			this->btUsuario = (gcnew System::Windows::Forms::Button());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Broadway", 41.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(145, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(570, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sistema de Trenes";
			// 
			// Identificacion
			// 
			this->Identificacion->BackColor = System::Drawing::Color::Khaki;
			this->Identificacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Identificacion->Location = System::Drawing::Point(764, 168);
			this->Identificacion->Name = L"Identificacion";
			this->Identificacion->Size = System::Drawing::Size(232, 32);
			this->Identificacion->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Font = (gcnew System::Drawing::Font(L"Forte", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(701, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(295, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese su identificacion";
			// 
			// btAdmin
			// 
			this->btAdmin->BackColor = System::Drawing::Color::Goldenrod;
			this->btAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btAdmin->Font = (gcnew System::Drawing::Font(L"Forte", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAdmin->Location = System::Drawing::Point(524, 499);
			this->btAdmin->Name = L"btAdmin";
			this->btAdmin->Size = System::Drawing::Size(232, 80);
			this->btAdmin->TabIndex = 3;
			this->btAdmin->Text = L"Administrador";
			this->btAdmin->UseVisualStyleBackColor = false;
			this->btAdmin->Click += gcnew System::EventHandler(this, &VentanaInicial::btAdmin_Click);
			// 
			// btUsuario
			// 
			this->btUsuario->BackColor = System::Drawing::Color::Goldenrod;
			this->btUsuario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btUsuario->Font = (gcnew System::Drawing::Font(L"Forte", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btUsuario->Location = System::Drawing::Point(197, 499);
			this->btUsuario->Name = L"btUsuario";
			this->btUsuario->Size = System::Drawing::Size(232, 80);
			this->btUsuario->TabIndex = 4;
			this->btUsuario->Text = L"Usuario";
			this->btUsuario->UseVisualStyleBackColor = false;
			this->btUsuario->Click += gcnew System::EventHandler(this, &VentanaInicial::btUsuario_Click);
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// VentanaInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 613);
			this->Controls->Add(this->btUsuario);
			this->Controls->Add(this->btAdmin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Identificacion);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"VentanaInicial";
			this->Text = L"Sistema de Trenes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
	#pragma endregion
		private: System::Void btUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ id = this->Identificacion->Text;
			Identificacion->Text = "La identificacion no existe";
			VentanaUsuario^ usuario = gcnew VentanaUsuario();
			usuario->ShowDialog();

		}
		private: System::Void btAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ id = this->Identificacion->Text;
			Identificacion->Text = "La identificacion no existe";
		}
	};
}
