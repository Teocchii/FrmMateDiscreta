#pragma once


namespace FormsMDis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Integrantes
	/// </summary>
	public ref class Integrantes : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Integrantes(void)
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
		~Integrantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Rtrn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected:

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
			this->Rtrn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Rtrn
			// 
			this->Rtrn->Location = System::Drawing::Point(597, 557);
			this->Rtrn->Name = L"Rtrn";
			this->Rtrn->Size = System::Drawing::Size(158, 85);
			this->Rtrn->TabIndex = 1;
			this->Rtrn->Text = L"Regresar";
			this->Rtrn->UseVisualStyleBackColor = true;
			this->Rtrn->Click += gcnew System::EventHandler(this, &Integrantes::Rtrn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 57);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Daniel Del Castillo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 57);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ariana Quelopana";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 327);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 57);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Andres Hizo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 412);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 57);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Axel Ordoñez";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(35, 499);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 57);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Oskar Sosa";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(689, 85);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Grupo II- Integrantes";
			// 
			// Integrantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 654);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Rtrn);
			this->Name = L"Integrantes";
			this->Text = L"Integrantes";
			this->Load += gcnew System::EventHandler(this, &Integrantes::Integrantes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Integrantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Rtrn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
