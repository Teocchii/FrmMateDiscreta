#pragma once
#include"V_Ca.h"
namespace FormsMDis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmCaribe
	/// </summary>
	public ref class FrmCaribe : public System::Windows::Forms::Form
	{
	public:
		FrmCaribe(void)
		{


			InitializeComponent();
			Car = new VuelosCA();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmCaribe()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		VuelosCA* Car;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxO_CA;
	private: System::Windows::Forms::ComboBox^ comboBoxD_CA;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Seleccionar1;
	private: System::Windows::Forms::Button^ Seleccionar2;
	private: System::Windows::Forms::Label^ origen_CA;
	private: System::Windows::Forms::Label^ destino_CA;
	private: System::Windows::Forms::Label^ ciudad_D_CA;
	private: System::Windows::Forms::Label^ ciudad_O_CA;
	private: System::Windows::Forms::Button^ button1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmCaribe::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxO_CA = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxD_CA = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Seleccionar1 = (gcnew System::Windows::Forms::Button());
			this->Seleccionar2 = (gcnew System::Windows::Forms::Button());
			this->origen_CA = (gcnew System::Windows::Forms::Label());
			this->destino_CA = (gcnew System::Windows::Forms::Label());
			this->ciudad_D_CA = (gcnew System::Windows::Forms::Label());
			this->ciudad_O_CA = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vuelos en el Caribe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Origen:";
			// 
			// comboBoxO_CA
			// 
			this->comboBoxO_CA->FormattingEnabled = true;
			this->comboBoxO_CA->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->comboBoxO_CA->Location = System::Drawing::Point(124, 179);
			this->comboBoxO_CA->Name = L"comboBoxO_CA";
			this->comboBoxO_CA->Size = System::Drawing::Size(115, 21);
			this->comboBoxO_CA->TabIndex = 3;
			// 
			// comboBoxD_CA
			// 
			this->comboBoxD_CA->FormattingEnabled = true;
			this->comboBoxD_CA->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->comboBoxD_CA->Location = System::Drawing::Point(416, 179);
			this->comboBoxD_CA->Name = L"comboBoxD_CA";
			this->comboBoxD_CA->Size = System::Drawing::Size(115, 21);
			this->comboBoxD_CA->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(351, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Destino:";
			// 
			// Seleccionar1
			// 
			this->Seleccionar1->Location = System::Drawing::Point(48, 212);
			this->Seleccionar1->Name = L"Seleccionar1";
			this->Seleccionar1->Size = System::Drawing::Size(75, 23);
			this->Seleccionar1->TabIndex = 6;
			this->Seleccionar1->Text = L"Seleccionar";
			this->Seleccionar1->UseVisualStyleBackColor = true;
			this->Seleccionar1->Click += gcnew System::EventHandler(this, &FrmCaribe::Seleccionar1_Click);
			// 
			// Seleccionar2
			// 
			this->Seleccionar2->Location = System::Drawing::Point(341, 212);
			this->Seleccionar2->Name = L"Seleccionar2";
			this->Seleccionar2->Size = System::Drawing::Size(75, 23);
			this->Seleccionar2->TabIndex = 7;
			this->Seleccionar2->Text = L"Seleccionar";
			this->Seleccionar2->UseVisualStyleBackColor = true;
			this->Seleccionar2->Click += gcnew System::EventHandler(this, &FrmCaribe::Seleccionar2_Click);
			// 
			// origen_CA
			// 
			this->origen_CA->AutoSize = true;
			this->origen_CA->Location = System::Drawing::Point(32, 217);
			this->origen_CA->Name = L"origen_CA";
			this->origen_CA->Size = System::Drawing::Size(10, 13);
			this->origen_CA->TabIndex = 8;
			this->origen_CA->Text = L"-";
			// 
			// destino_CA
			// 
			this->destino_CA->AutoSize = true;
			this->destino_CA->Location = System::Drawing::Point(325, 217);
			this->destino_CA->Name = L"destino_CA";
			this->destino_CA->Size = System::Drawing::Size(10, 13);
			this->destino_CA->TabIndex = 9;
			this->destino_CA->Text = L"-";
			// 
			// ciudad_D_CA
			// 
			this->ciudad_D_CA->AutoSize = true;
			this->ciudad_D_CA->Location = System::Drawing::Point(515, 377);
			this->ciudad_D_CA->Name = L"ciudad_D_CA";
			this->ciudad_D_CA->Size = System::Drawing::Size(16, 13);
			this->ciudad_D_CA->TabIndex = 10;
			this->ciudad_D_CA->Text = L"...";
			// 
			// ciudad_O_CA
			// 
			this->ciudad_O_CA->AutoSize = true;
			this->ciudad_O_CA->Location = System::Drawing::Point(32, 377);
			this->ciudad_O_CA->Name = L"ciudad_O_CA";
			this->ciudad_O_CA->Size = System::Drawing::Size(16, 13);
			this->ciudad_O_CA->TabIndex = 11;
			this->ciudad_O_CA->Text = L"...";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(124, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 189);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Viajar";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FrmCaribe::button1_Click);
			// 
			// FrmCaribe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 530);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ciudad_O_CA);
			this->Controls->Add(this->ciudad_D_CA);
			this->Controls->Add(this->destino_CA);
			this->Controls->Add(this->origen_CA);
			this->Controls->Add(this->Seleccionar2);
			this->Controls->Add(this->Seleccionar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxD_CA);
			this->Controls->Add(this->comboBoxO_CA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FrmCaribe";
			this->Text = L"FrmCaribe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Seleccionar1_Click(System::Object^ sender, System::EventArgs^ e) {
		int o = System::Convert::ToInt16(comboBoxO_CA->Text);
		switch (o)
		{
		case 0:
			ciudad_O_CA->Text = "Lima";
			break;
		case 1:
			ciudad_O_CA->Text = "Guayaquil";
			break;
		case 2:
			ciudad_O_CA->Text = "Quito";
			break;
		case 3:
			ciudad_O_CA->Text = "Cali";
			break;
		case 4:
			ciudad_O_CA->Text = "Bogota";
			break;
		case 5:
			ciudad_O_CA->Text = "Medellin";
			break;
		case 6:
			ciudad_O_CA->Text = "Ciudad de Panama";
			break;
		case 7:
			ciudad_O_CA->Text = "San Jose de Costa Rica";
			break;
		case 8:
			ciudad_O_CA->Text = "Liberia";
			break;
		case 9:
			ciudad_O_CA->Text = "Managua";
			break;
		case 10:
			ciudad_O_CA->Text = "Tegucigalpa";
			break;
		case 11:
			ciudad_O_CA->Text = "San Salvador";
			break;
		case 12:
			ciudad_O_CA->Text = "La ceiba";
			break;
		case 13:
			ciudad_O_CA->Text = "Roatan";
			break;
		case 14:
			ciudad_O_CA->Text = "San Pedro de Sula";
			break;
		case 15:
			ciudad_O_CA->Text = "Ciudad de Guatemala";
			break;
		case 16:
			ciudad_O_CA->Text = "Flores";
			break;
		case 17:
			ciudad_O_CA->Text = "Belice";
			break;
		case 18:
			ciudad_O_CA->Text = "Cancun";
			break;
		case 19:
			ciudad_O_CA->Text = "Ciudad de Mexico";
			break;
		case 20:
			ciudad_O_CA->Text = "La Habana";
			break;
		case 21:
			ciudad_O_CA->Text = "Santo Domingo";
			break;
		case 22:
			ciudad_O_CA->Text = "Punta Cana";
			break;
		case 23:
			ciudad_O_CA->Text = "San Juan";
			break;
		case 24:
			ciudad_O_CA->Text = "Caracas";
			break;
		default:
			break;
		}

	}

	private: System::Void Seleccionar2_Click(System::Object^ sender, System::EventArgs^ e) {
		int d = System::Convert::ToInt16(comboBoxD_CA->Text);
		switch (d)
		{
		case 0:
			ciudad_D_CA->Text = "Lima";
			break;
		case 1:
			ciudad_D_CA->Text = "Guayaquil";
			break;
		case 2:
			ciudad_D_CA->Text = "Quito";
			break;
		case 3:
			ciudad_D_CA->Text = "Cali";
			break;
		case 4:
			ciudad_D_CA->Text = "Bogota";
			break;
		case 5:
			ciudad_D_CA->Text = "Medellin";
			break;
		case 6:
			ciudad_D_CA->Text = "Ciudad de Panama";
			break;
		case 7:
			ciudad_D_CA->Text = "San Jose de Costa Rica";
			break;
		case 8:
			ciudad_D_CA->Text = "Liberia";
			break;
		case 9:
			ciudad_D_CA->Text = "Managua";
			break;
		case 10:
			ciudad_D_CA->Text = "Tegucigalpa";
			break;
		case 11:
			ciudad_D_CA->Text = "San Salvador";
			break;
		case 12:
			ciudad_D_CA->Text = "La ceiba";
			break;
		case 13:
			ciudad_D_CA->Text = "Roatan";
			break;
		case 14:
			ciudad_D_CA->Text = "San Pedro de Sula";
			break;
		case 15:
			ciudad_D_CA->Text = "Ciudad de Guatemala";
			break;
		case 16:
			ciudad_D_CA->Text = "Flores";
			break;
		case 17:
			ciudad_D_CA->Text = "Belice";
			break;
		case 18:
			ciudad_D_CA->Text = "Cancun";
			break;
		case 19:
			ciudad_D_CA->Text = "Ciudad de Mexico";
			break;
		case 20:
			ciudad_D_CA->Text = "La Habana";
			break;
		case 21:
			ciudad_D_CA->Text = "Santo Domingo";
			break;
		case 22:
			ciudad_D_CA->Text = "Punta Cana";
			break;
		case 23:
			ciudad_D_CA->Text = "San Juan";
			break;
		case 24:
			ciudad_D_CA->Text = "Caracas";
			break;
		default:
			break;
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		origen_CA->Text = comboBoxO_CA->Text;
		int origen = System::Convert::ToInt16(comboBoxO_CA->Text);

		destino_CA->Text = comboBoxD_CA->Text;
		int destino = System::Convert::ToInt16(comboBoxD_CA->Text);
		if (origen == destino)
		{
			MessageBox::Show("Ingreso la misma ciudad como origen y destino");
		}
		else{ Car->escalasCA(origen, destino);}

		
	}
};
}
