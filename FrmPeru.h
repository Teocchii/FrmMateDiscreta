#pragma once
#include<cstdlib>
#include <string>
#include "V_peru.h"
namespace FormsMDis {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class FrmPeru : public System::Windows::Forms::Form
	{
	public:
		FrmPeru(void)
		{
			InitializeComponent();
			ctrl = new VuelosPe();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmPeru()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ OrigenPE;
	private: System::Windows::Forms::Label^ DestinoPE;







	private: System::Windows::Forms::Button^ Boton_viajepe;
	private:
		VuelosPe* ctrl;
		
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Vuelos_Pe;









	private: System::Windows::Forms::Label^ ciudad_des;

	private: System::Windows::Forms::Label^ ciudad_origen;
	private: System::Windows::Forms::Label^ show_o;
	private: System::Windows::Forms::Button^ S_Origen;
	private: System::Windows::Forms::Button^ S_Des;
	private: System::Windows::Forms::Label^ mostrarOrigen;
	private: System::Windows::Forms::Label^ mostrar_Destino;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmPeru::typeid));
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->OrigenPE = (gcnew System::Windows::Forms::Label());
			this->DestinoPE = (gcnew System::Windows::Forms::Label());
			this->Boton_viajepe = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Vuelos_Pe = (gcnew System::Windows::Forms::Label());
			this->ciudad_des = (gcnew System::Windows::Forms::Label());
			this->ciudad_origen = (gcnew System::Windows::Forms::Label());
			this->show_o = (gcnew System::Windows::Forms::Label());
			this->S_Origen = (gcnew System::Windows::Forms::Button());
			this->S_Des = (gcnew System::Windows::Forms::Button());
			this->mostrarOrigen = (gcnew System::Windows::Forms::Label());
			this->mostrar_Destino = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8"
			});
			this->comboBox2->Location = System::Drawing::Point(433, 216);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(163, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// OrigenPE
			// 
			this->OrigenPE->AutoSize = true;
			this->OrigenPE->Location = System::Drawing::Point(12, 213);
			this->OrigenPE->Name = L"OrigenPE";
			this->OrigenPE->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->OrigenPE->Size = System::Drawing::Size(44, 13);
			this->OrigenPE->TabIndex = 2;
			this->OrigenPE->Text = L"Origen: ";
			// 
			// DestinoPE
			// 
			this->DestinoPE->AutoSize = true;
			this->DestinoPE->Location = System::Drawing::Point(347, 216);
			this->DestinoPE->Name = L"DestinoPE";
			this->DestinoPE->Size = System::Drawing::Size(46, 13);
			this->DestinoPE->TabIndex = 3;
			this->DestinoPE->Text = L"Destino:";
			// 
			// Boton_viajepe
			// 
			this->Boton_viajepe->AccessibleRole = System::Windows::Forms::AccessibleRole::ComboBox;
			this->Boton_viajepe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Boton_viajepe.BackgroundImage")));
			this->Boton_viajepe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Boton_viajepe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_viajepe->Location = System::Drawing::Point(193, 326);
			this->Boton_viajepe->Name = L"Boton_viajepe";
			this->Boton_viajepe->Size = System::Drawing::Size(266, 137);
			this->Boton_viajepe->TabIndex = 10;
			this->Boton_viajepe->Text = L"Viajar";
			this->Boton_viajepe->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Boton_viajepe->UseVisualStyleBackColor = true;
			this->Boton_viajepe->Click += gcnew System::EventHandler(this, &FrmPeru::Boton_viajepe_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8"
			});
			this->comboBox1->Location = System::Drawing::Point(62, 213);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &FrmPeru::comboBox1_SelectionChangeCommitted);
			// 
			// Vuelos_Pe
			// 
			this->Vuelos_Pe->AutoSize = true;
			this->Vuelos_Pe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Vuelos_Pe->Location = System::Drawing::Point(104, 9);
			this->Vuelos_Pe->Name = L"Vuelos_Pe";
			this->Vuelos_Pe->Size = System::Drawing::Size(460, 55);
			this->Vuelos_Pe->TabIndex = 12;
			this->Vuelos_Pe->Text = L"VUELOS EN PERU";
			// 
			// ciudad_des
			// 
			this->ciudad_des->AutoSize = true;
			this->ciudad_des->Location = System::Drawing::Point(604, 42);
			this->ciudad_des->Name = L"ciudad_des";
			this->ciudad_des->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ciudad_des->Size = System::Drawing::Size(10, 13);
			this->ciudad_des->TabIndex = 9;
			this->ciudad_des->Text = L"-";
			// 
			// ciudad_origen
			// 
			this->ciudad_origen->AutoSize = true;
			this->ciudad_origen->Location = System::Drawing::Point(46, 26);
			this->ciudad_origen->Name = L"ciudad_origen";
			this->ciudad_origen->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ciudad_origen->Size = System::Drawing::Size(10, 13);
			this->ciudad_origen->TabIndex = 5;
			this->ciudad_origen->Text = L"-";
			this->ciudad_origen->Click += gcnew System::EventHandler(this, &FrmPeru::label1_Click);
			// 
			// show_o
			// 
			this->show_o->AutoSize = true;
			this->show_o->Location = System::Drawing::Point(124, 267);
			this->show_o->Name = L"show_o";
			this->show_o->Size = System::Drawing::Size(10, 13);
			this->show_o->TabIndex = 22;
			this->show_o->Text = L".";
			// 
			// S_Origen
			// 
			this->S_Origen->Location = System::Drawing::Point(108, 257);
			this->S_Origen->Name = L"S_Origen";
			this->S_Origen->Size = System::Drawing::Size(75, 23);
			this->S_Origen->TabIndex = 23;
			this->S_Origen->Text = L"Seleccionar";
			this->S_Origen->UseVisualStyleBackColor = true;
			this->S_Origen->Click += gcnew System::EventHandler(this, &FrmPeru::S_Origen_Click);
			// 
			// S_Des
			// 
			this->S_Des->Location = System::Drawing::Point(486, 261);
			this->S_Des->Name = L"S_Des";
			this->S_Des->Size = System::Drawing::Size(75, 25);
			this->S_Des->TabIndex = 24;
			this->S_Des->Text = L"Seleccionar";
			this->S_Des->UseVisualStyleBackColor = true;
			this->S_Des->Click += gcnew System::EventHandler(this, &FrmPeru::S_Des_Click);
			// 
			// mostrarOrigen
			// 
			this->mostrarOrigen->AutoSize = true;
			this->mostrarOrigen->Location = System::Drawing::Point(60, 357);
			this->mostrarOrigen->Name = L"mostrarOrigen";
			this->mostrarOrigen->Size = System::Drawing::Size(10, 13);
			this->mostrarOrigen->TabIndex = 25;
			this->mostrarOrigen->Text = L".";
			// 
			// mostrar_Destino
			// 
			this->mostrar_Destino->AutoSize = true;
			this->mostrar_Destino->Location = System::Drawing::Point(512, 357);
			this->mostrar_Destino->Name = L"mostrar_Destino";
			this->mostrar_Destino->Size = System::Drawing::Size(10, 13);
			this->mostrar_Destino->TabIndex = 26;
			this->mostrar_Destino->Text = L".";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 509);
			this->Controls->Add(this->mostrar_Destino);
			this->Controls->Add(this->mostrarOrigen);
			this->Controls->Add(this->S_Des);
			this->Controls->Add(this->S_Origen);
			this->Controls->Add(this->show_o);
			this->Controls->Add(this->Vuelos_Pe);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Boton_viajepe);
			this->Controls->Add(this->ciudad_des);
			this->Controls->Add(this->ciudad_origen);
			this->Controls->Add(this->DestinoPE);
			this->Controls->Add(this->OrigenPE);
			this->Controls->Add(this->comboBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &FrmPeru::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void S_Origen_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int o=System::Convert::ToInt16(comboBox1->Text);
		switch (o)
		{
		case 0:
			mostrarOrigen->Text = "Lima";
			break;
		case 1:
			mostrarOrigen->Text = "Iquitos";
			break;
		case 2:
			mostrarOrigen->Text = "Piura";

			break;
		case 3:
			mostrarOrigen->Text = "	Chiclayo";

			break;
		case 4:
			mostrarOrigen->Text = "Trujillo";

			break;
		case 5:
			mostrarOrigen->Text = "Puerto Maldonado";

			break;
		case 6:
			mostrarOrigen->Text = "Cusco";

			break;
		case 7:
			mostrarOrigen->Text = "Juliaca";

			break;
		case 8:
			mostrarOrigen->Text = "Arequipa";
			break;

		default:
			break;
		}

	}
	private: System::Void S_Des_Click(System::Object^ sender, System::EventArgs^ e) {

		int d = System::Convert::ToInt16(comboBox2->Text);
		switch (d)
	{
	case 0:
		mostrar_Destino->Text = "Lima";
		break;
	case 1:
		mostrar_Destino->Text = "Iquitos";
		break;
	case 2:
		mostrar_Destino->Text = "Piura";

		break;
	case 3:
		mostrar_Destino->Text = "	Chiclayo";

		break;
	case 4:
		mostrar_Destino->Text = "Trujillo";

		break;
	case 5:
		mostrar_Destino->Text = "Puerto Maldonado";

		break;
	case 6:
		mostrar_Destino->Text = "Cusco";

		break;
	case 7:
		mostrar_Destino->Text = "Juliaca";

		break;
	case 8:
		mostrar_Destino->Text = "Arequipa";
		break;

	default:
		break;
	}

	}
	private: System::Void Boton_viajepe_Click(System::Object^ sender, System::EventArgs^ e) {

	ciudad_origen->Text = comboBox1->Text;
	int origen = System::Convert::ToInt16(comboBox1->Text);
	
	ciudad_des->Text = comboBox2->Text;
	int destino = System::Convert::ToInt16(comboBox2->Text);		
	system("CLS");

	if (origen == destino)
	{
		MessageBox::Show("Ingreso la misma ciudad como origen y destino");

	}
	else
	{
		ctrl->escalaspe(origen, destino);
	}

	
	

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void comboBox1_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	

	};


}
