#pragma once
#include"V_Col.h"

namespace FormsMDis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmColombia
	/// </summary>
	public ref class FrmColombia : public System::Windows::Forms::Form
	{
	public:
		FrmColombia(void)
		{
			InitializeComponent();
			co = new VuelosCO();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmColombia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBoxO_Co;
	private: System::Windows::Forms::ComboBox^ comboBoxD_Co;


	private: System::Windows::Forms::Label^ labelOr;
	private: System::Windows::Forms::Label^ labelDesCo;
	private: System::Windows::Forms::Label^ ciudad_origen;
	private: System::Windows::Forms::Label^ ciudad_des;
	private: System::Windows::Forms::Button^ ViajarCO;
	protected:

	private:
		VuelosCO* co;
	private: System::Windows::Forms::Label^ mostrar_o;
	private: System::Windows::Forms::Label^ mostrarD;




	private: System::Windows::Forms::Button^ mostrar_Des;
	private: System::Windows::Forms::Button^ mostrar_D;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmColombia::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxO_Co = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxD_Co = (gcnew System::Windows::Forms::ComboBox());
			this->labelOr = (gcnew System::Windows::Forms::Label());
			this->labelDesCo = (gcnew System::Windows::Forms::Label());
			this->ciudad_origen = (gcnew System::Windows::Forms::Label());
			this->ciudad_des = (gcnew System::Windows::Forms::Label());
			this->ViajarCO = (gcnew System::Windows::Forms::Button());
			this->mostrar_o = (gcnew System::Windows::Forms::Label());
			this->mostrarD = (gcnew System::Windows::Forms::Label());
			this->mostrar_Des = (gcnew System::Windows::Forms::Button());
			this->mostrar_D = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(370, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vuelos en Colombia";
			// 
			// comboBoxO_Co
			// 
			this->comboBoxO_Co->FormattingEnabled = true;
			this->comboBoxO_Co->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22"
			});
			this->comboBoxO_Co->Location = System::Drawing::Point(128, 197);
			this->comboBoxO_Co->Name = L"comboBoxO_Co";
			this->comboBoxO_Co->Size = System::Drawing::Size(121, 21);
			this->comboBoxO_Co->TabIndex = 1;
			// 
			// comboBoxD_Co
			// 
			this->comboBoxD_Co->FormattingEnabled = true;
			this->comboBoxD_Co->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22"
			});
			this->comboBoxD_Co->Location = System::Drawing::Point(447, 197);
			this->comboBoxD_Co->Name = L"comboBoxD_Co";
			this->comboBoxD_Co->Size = System::Drawing::Size(121, 21);
			this->comboBoxD_Co->TabIndex = 2;
			// 
			// labelOr
			// 
			this->labelOr->AutoSize = true;
			this->labelOr->Location = System::Drawing::Point(59, 200);
			this->labelOr->Name = L"labelOr";
			this->labelOr->Size = System::Drawing::Size(41, 13);
			this->labelOr->TabIndex = 3;
			this->labelOr->Text = L"Origen:";
			// 
			// labelDesCo
			// 
			this->labelDesCo->AutoSize = true;
			this->labelDesCo->Location = System::Drawing::Point(358, 200);
			this->labelDesCo->Name = L"labelDesCo";
			this->labelDesCo->Size = System::Drawing::Size(46, 13);
			this->labelDesCo->TabIndex = 4;
			this->labelDesCo->Text = L"Destino:";
			// 
			// ciudad_origen
			// 
			this->ciudad_origen->AutoSize = true;
			this->ciudad_origen->Location = System::Drawing::Point(34, 244);
			this->ciudad_origen->Name = L"ciudad_origen";
			this->ciudad_origen->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ciudad_origen->Size = System::Drawing::Size(10, 13);
			this->ciudad_origen->TabIndex = 6;
			this->ciudad_origen->Text = L"-";
			// 
			// ciudad_des
			// 
			this->ciudad_des->AutoSize = true;
			this->ciudad_des->Location = System::Drawing::Point(394, 244);
			this->ciudad_des->Name = L"ciudad_des";
			this->ciudad_des->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ciudad_des->Size = System::Drawing::Size(10, 13);
			this->ciudad_des->TabIndex = 10;
			this->ciudad_des->Text = L"-";
			// 
			// ViajarCO
			// 
			this->ViajarCO->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ViajarCO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViajarCO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViajarCO.Image")));
			this->ViajarCO->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ViajarCO->Location = System::Drawing::Point(205, 383);
			this->ViajarCO->Name = L"ViajarCO";
			this->ViajarCO->Size = System::Drawing::Size(222, 145);
			this->ViajarCO->TabIndex = 11;
			this->ViajarCO->Text = L"Viajar";
			this->ViajarCO->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ViajarCO->UseVisualStyleBackColor = true;
			this->ViajarCO->Click += gcnew System::EventHandler(this, &FrmColombia::ViajarCO_Click);
			// 
			// mostrar_o
			// 
			this->mostrar_o->AutoSize = true;
			this->mostrar_o->Location = System::Drawing::Point(103, 443);
			this->mostrar_o->Name = L"mostrar_o";
			this->mostrar_o->Size = System::Drawing::Size(16, 13);
			this->mostrar_o->TabIndex = 12;
			this->mostrar_o->Text = L"...";
			// 
			// mostrarD
			// 
			this->mostrarD->AutoSize = true;
			this->mostrarD->Location = System::Drawing::Point(518, 443);
			this->mostrarD->Name = L"mostrarD";
			this->mostrarD->Size = System::Drawing::Size(16, 13);
			this->mostrarD->TabIndex = 13;
			this->mostrarD->Text = L"...";
			// 
			// mostrar_Des
			// 
			this->mostrar_Des->Location = System::Drawing::Point(336, 238);
			this->mostrar_Des->Name = L"mostrar_Des";
			this->mostrar_Des->Size = System::Drawing::Size(91, 25);
			this->mostrar_Des->TabIndex = 14;
			this->mostrar_Des->Text = L"Seleccionar";
			this->mostrar_Des->UseVisualStyleBackColor = true;
			this->mostrar_Des->Click += gcnew System::EventHandler(this, &FrmColombia::mostrar_Des_Click);
			// 
			// mostrar_D
			// 
			this->mostrar_D->Location = System::Drawing::Point(37, 238);
			this->mostrar_D->Name = L"mostrar_D";
			this->mostrar_D->Size = System::Drawing::Size(91, 25);
			this->mostrar_D->TabIndex = 15;
			this->mostrar_D->Text = L"Seleccionar";
			this->mostrar_D->UseVisualStyleBackColor = true;
			this->mostrar_D->Click += gcnew System::EventHandler(this, &FrmColombia::mostrar_D_Click);
			// 
			// FrmColombia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 600);
			this->Controls->Add(this->mostrar_D);
			this->Controls->Add(this->mostrar_Des);
			this->Controls->Add(this->mostrarD);
			this->Controls->Add(this->mostrar_o);
			this->Controls->Add(this->ViajarCO);
			this->Controls->Add(this->ciudad_des);
			this->Controls->Add(this->ciudad_origen);
			this->Controls->Add(this->labelDesCo);
			this->Controls->Add(this->labelOr);
			this->Controls->Add(this->comboBoxD_Co);
			this->Controls->Add(this->comboBoxO_Co);
			this->Controls->Add(this->label1);
			this->Name = L"FrmColombia";
			this->Text = L"FrmColombia";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViajarCO_Click(System::Object^ sender, System::EventArgs^ e) {
		ciudad_origen->Text = comboBoxO_Co->Text;
		int origen = System::Convert::ToInt16(comboBoxO_Co->Text);
		
		ciudad_des->Text = comboBoxD_Co->Text;
		int destino = System::Convert::ToInt16(comboBoxD_Co->Text);
		


		
		if (origen==destino)
		{
			MessageBox::Show("Ingreso la misma ciudad como origen y destino");
		
		}
		else
		{
		co->escalasco(origen, destino);
		}
		
		
		

	}
	private: System::Void mostrar_D_Click(System::Object^ sender, System::EventArgs^ e) {
		int o = System::Convert::ToInt16(comboBoxO_Co->Text);
		switch (o)
		{
		case 0:
			mostrar_o->Text = "Bogota";
			break;
		case 1:
			mostrar_o->Text = "Yopal";
			break;
		case 2:
			mostrar_o->Text = "Pasto";
			break;
		case 3:
			mostrar_o->Text = "Villavicencio";
			break;
		case 4:
			mostrar_o->Text = "Florencia";
			break;
		case 5:
			mostrar_o->Text = "Neiva";
			break;
		case 6:
			mostrar_o->Text = "Popayan";
			break;
		case 7:
			mostrar_o->Text = "Tumaco";
			break;
		case 8:
			mostrar_o->Text = "Cali";
			break;
		case 9:
			mostrar_o->Text = "Ibague";
			break;
		case 10:
			mostrar_o->Text = "Armenia";
			break;
		case 11:
			mostrar_o->Text = "Pereira";
			break;
		case 12:
			mostrar_o->Text = "Medellin";
			break;
		case 13:
			mostrar_o->Text = "Monteria";
			break;
		case 14:
			mostrar_o->Text = "Cartagena";
			break;
		case 15:
			mostrar_o->Text = "San Andres";
			break;
		case 16:
			mostrar_o->Text = "Barranquilla";
			break;
		case 17:
			mostrar_o->Text = "Santa Marta";
			break;
		case 18:
			mostrar_o->Text = "Riohacha";
			break;
		case 19:
			mostrar_o->Text = "Cucuta";
			break;
		case 20:
			mostrar_o->Text = "Bucaramanga";
			break;
		case 21:
			mostrar_o->Text = "Barrancabermeja";
			break;
		case 22:
			mostrar_o->Text = "Leticia";
			break;
		default:
			break;
		}


	
	}
	private: System::Void mostrar_Des_Click(System::Object^ sender, System::EventArgs^ e) {
		int d = System::Convert::ToInt16(comboBoxD_Co->Text);
		switch (d)
		{
		case 0:
			mostrarD->Text = "Bogota";
			break;
		case 1:
			mostrarD->Text = "Yopal";
			break;
		case 2:
			mostrarD->Text = "Pasto";
			break;
		case 3:
			mostrarD->Text = "Villavicencio";
			break;
		case 4:
			mostrarD->Text = "Florencia";
			break;
		case 5:
			mostrarD->Text = "Neiva";
			break;
		case 6:
			mostrarD->Text = "Popayan";
			break;
		case 7:
			mostrarD->Text = "Tumaco";
			break;
		case 8:
			mostrarD->Text = "Cali";
			break;
		case 9:
			mostrarD->Text = "Ibague";
			break;
		case 10:
			mostrarD->Text = "Armenia";
			break;
		case 11:
			mostrarD->Text = "Pereira";
			break;
		case 12:
			mostrarD->Text = "Medellin";
			break;
		case 13:
			mostrarD->Text = "Monteria";
			break;
		case 14:
			mostrarD->Text = "Cartagena";
			break;
		case 15:
			mostrarD->Text = "San Andres";
			break;
		case 16:
			mostrarD->Text = "Barranquilla";
			break;
		case 17:
			mostrarD->Text = "Santa Marta";
			break;
		case 18:
			mostrarD->Text = "Riohacha";
			break;
		case 19:
			mostrarD->Text = "Cucuta";
			break;
		case 20:
			mostrarD->Text = "Bucaramanga";
			break;
		case 21:
			mostrarD->Text = "Barrancabermeja";
			break;
		case 22:
			mostrarD->Text = "Leticia";
			break;
		default:
			break;
		}

	}
};
}
