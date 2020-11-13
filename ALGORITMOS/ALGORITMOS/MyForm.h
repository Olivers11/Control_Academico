#pragma once

#include <string>
using namespace std;




namespace ALGORITMOS {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_central;
	protected:
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ btn_agregar;
	public: System::Windows::Forms::TextBox^ txt_anio;
	private:
	public: System::Windows::Forms::TextBox^ txt_facultad;
	public: System::Windows::Forms::TextBox^ txt_cat;
	public: System::Windows::Forms::TextBox^ txt_codigo;








	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ txt_nombre;
	private:

	private: System::Windows::Forms::Label^ label1;

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
			this->panel_central = (gcnew System::Windows::Forms::Panel());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->txt_anio = (gcnew System::Windows::Forms::TextBox());
			this->txt_facultad = (gcnew System::Windows::Forms::TextBox());
			this->txt_cat = (gcnew System::Windows::Forms::TextBox());
			this->txt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel_central->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_central
			// 
			this->panel_central->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel_central->Controls->Add(this->txt_nombre);
			this->panel_central->Controls->Add(this->label1);
			this->panel_central->Controls->Add(this->btn_cancel);
			this->panel_central->Controls->Add(this->btn_agregar);
			this->panel_central->Controls->Add(this->txt_anio);
			this->panel_central->Controls->Add(this->txt_facultad);
			this->panel_central->Controls->Add(this->txt_cat);
			this->panel_central->Controls->Add(this->txt_codigo);
			this->panel_central->Controls->Add(this->label5);
			this->panel_central->Controls->Add(this->label4);
			this->panel_central->Controls->Add(this->label3);
			this->panel_central->Controls->Add(this->label2);
			this->panel_central->Location = System::Drawing::Point(17, 12);
			this->panel_central->Name = L"panel_central";
			this->panel_central->Size = System::Drawing::Size(614, 350);
			this->panel_central->TabIndex = 0;
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::SystemColors::Menu;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(297, 52);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(202, 24);
			this->txt_nombre->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(143, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Curso";
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_cancel->FlatAppearance->BorderSize = 0;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_cancel->Location = System::Drawing::Point(354, 304);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(145, 25);
			this->btn_cancel->TabIndex = 21;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = false;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm::btn_cancel_Click);
			// 
			// btn_agregar
			// 
			this->btn_agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_agregar->FlatAppearance->BorderSize = 0;
			this->btn_agregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_agregar->Location = System::Drawing::Point(147, 302);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(131, 28);
			this->btn_agregar->TabIndex = 20;
			this->btn_agregar->Text = L"Agregar";
			this->btn_agregar->UseVisualStyleBackColor = false;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &MyForm::btn_agregar_Click);
			// 
			// txt_anio
			// 
			this->txt_anio->BackColor = System::Drawing::SystemColors::Menu;
			this->txt_anio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_anio->Location = System::Drawing::Point(297, 233);
			this->txt_anio->Multiline = true;
			this->txt_anio->Name = L"txt_anio";
			this->txt_anio->Size = System::Drawing::Size(202, 24);
			this->txt_anio->TabIndex = 19;
			// 
			// txt_facultad
			// 
			this->txt_facultad->BackColor = System::Drawing::SystemColors::Menu;
			this->txt_facultad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_facultad->Location = System::Drawing::Point(297, 183);
			this->txt_facultad->Multiline = true;
			this->txt_facultad->Name = L"txt_facultad";
			this->txt_facultad->Size = System::Drawing::Size(202, 24);
			this->txt_facultad->TabIndex = 18;
			// 
			// txt_cat
			// 
			this->txt_cat->BackColor = System::Drawing::SystemColors::Menu;
			this->txt_cat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cat->Location = System::Drawing::Point(297, 135);
			this->txt_cat->Multiline = true;
			this->txt_cat->Name = L"txt_cat";
			this->txt_cat->Size = System::Drawing::Size(202, 24);
			this->txt_cat->TabIndex = 17;
			// 
			// txt_codigo
			// 
			this->txt_codigo->BackColor = System::Drawing::SystemColors::Menu;
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->Location = System::Drawing::Point(297, 91);
			this->txt_codigo->Multiline = true;
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(202, 24);
			this->txt_codigo->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(143, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 24);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Año";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(143, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Facultad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(143, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Catedratico";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(143, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Codigo Curso";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->ClientSize = System::Drawing::Size(689, 385);
			this->Controls->Add(this->panel_central);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel_central->ResumeLayout(false);
			this->panel_central->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(L"¿Desea salir sin guardar cambios?", "Salir", MessageBoxButtons::YesNo);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
		
	}
	


	public: string* RetornarCadenas()
	{
		 string nombre = this->toStandardString(this->txt_nombre->Text);
		 string codigo = this->toStandardString(this->txt_codigo->Text);
		 string cat = this->toStandardString(this->txt_cat->Text);
		 string fac = this->toStandardString(this->txt_facultad->Text);
		 string anio = this->toStandardString(this->txt_anio->Text);		 
		 static string arr[] = { nombre, codigo, cat, fac, anio };
		 return arr;
	}

	public: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {

		//al agregar debemos notificarle al usuario y cerrar el formulario
		MessageBox::Show(L"El Curso " + this->txt_nombre->Text  + L" se ha agregado correctamente!");
		this->Close();
	}

	public: string RetornarNombre()
	{
		return this->toStandardString(this->txt_nombre->Text);
	}

	
	public: static string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}

	public: static String^ toSystemString(string cadena)
	{
		return gcnew String(cadena.c_str());
	}




};
}
