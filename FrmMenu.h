#pragma once
#include"FrmPeru.h"
#include"FrmColombia.h"
#include"Integrantes.h"
#include"FrmCaribe.h"

namespace FormsMDis {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmMenu
	/// </summary>
	public ref class FrmMenu : public System::Windows::Forms::Form
	{
	public:
		FrmMenu(void)
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
		~FrmMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ integ;
	private: System::Windows::Forms::Label^ label3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->integ = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(109, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Peru";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FrmMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(244, 293);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Colombia";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FrmMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(375, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Caribe";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FrmMenu::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(176, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 75);
			this->label1->TabIndex = 4;
			this->label1->Text = L"VUELOS:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Location = System::Drawing::Point(343, 461);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 49);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FrmMenu::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 54, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(528, 81);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Avianca Express";
			// 
			// integ
			// 
			this->integ->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->integ->Location = System::Drawing::Point(94, 461);
			this->integ->Name = L"integ";
			this->integ->Size = System::Drawing::Size(151, 49);
			this->integ->TabIndex = 7;
			this->integ->Text = L"Integrantes";
			this->integ->UseVisualStyleBackColor = false;
			this->integ->Click += gcnew System::EventHandler(this, &FrmMenu::integ_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(187, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 75);
			this->label3->TabIndex = 8;
			this->label3->Text = L"EXTRAS:";
			// 
			// FrmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 556);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->integ);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FrmMenu";
			this->Text = L"FrmMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FrmPeru^ pe = gcnew FrmPeru();
		pe->ShowDialog();
		Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FrmColombia^ col = gcnew FrmColombia();
		col->ShowDialog();
		Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		FrmCaribe^ car = gcnew FrmCaribe();
		car->ShowDialog();
		Close();
	
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

	}

	private: System::Void integ_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Integrantes^ ig = gcnew Integrantes();
		ig->ShowDialog();
		Close();
	}
};
}
