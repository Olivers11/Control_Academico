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
	/// Resumen de AgregarAlumno
	/// </summary>
	public ref class AgregarAlumno : public System::Windows::Forms::Form
	{
	public:
		AgregarAlumno(void)
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
		~AgregarAlumno()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Panel^ panel_inferior;
















	private: System::Windows::Forms::Panel^ panel_up;
	public: System::Windows::Forms::ComboBox^ btn_cursos;
	private:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ txt_carnet;
	private:

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ txt_nombre;
	private:

	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ txt_final;
	private:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_bonos;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_guias;
	private: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ txt_total;
	private:

	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txt_tareas;
	private:

	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ txt_parcial2;
	private:

	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ txt_parcial1;
	private:



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
			this->panel_inferior = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_total = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_tareas = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_parcial2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_parcial1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_final = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_bonos = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_guias = (gcnew System::Windows::Forms::TextBox());
			this->panel_up = (gcnew System::Windows::Forms::Panel());
			this->btn_cursos = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_carnet = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->panel_inferior->SuspendLayout();
			this->panel_up->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_inferior
			// 
			this->panel_inferior->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel_inferior->Controls->Add(this->label10);
			this->panel_inferior->Controls->Add(this->txt_total);
			this->panel_inferior->Controls->Add(this->label6);
			this->panel_inferior->Controls->Add(this->txt_tareas);
			this->panel_inferior->Controls->Add(this->label5);
			this->panel_inferior->Controls->Add(this->txt_parcial2);
			this->panel_inferior->Controls->Add(this->label4);
			this->panel_inferior->Controls->Add(this->txt_parcial1);
			this->panel_inferior->Controls->Add(this->btn_cancelar);
			this->panel_inferior->Controls->Add(this->btn_guardar);
			this->panel_inferior->Controls->Add(this->label7);
			this->panel_inferior->Controls->Add(this->txt_final);
			this->panel_inferior->Controls->Add(this->label8);
			this->panel_inferior->Controls->Add(this->txt_bonos);
			this->panel_inferior->Controls->Add(this->label9);
			this->panel_inferior->Controls->Add(this->txt_guias);
			this->panel_inferior->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_inferior->Location = System::Drawing::Point(0, 165);
			this->panel_inferior->Name = L"panel_inferior";
			this->panel_inferior->Size = System::Drawing::Size(662, 181);
			this->panel_inferior->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(70, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 18);
			this->label10->TabIndex = 36;
			this->label10->Text = L"TOTAL";
			// 
			// txt_total
			// 
			this->txt_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_total->Location = System::Drawing::Point(148, 144);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(121, 22);
			this->txt_total->TabIndex = 35;
			this->txt_total->Text = L"0";
			this->txt_total->TextChanged += gcnew System::EventHandler(this, &AgregarAlumno::txt_total_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(59, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 18);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Tareas";
			// 
			// txt_tareas
			// 
			this->txt_tareas->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_tareas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_tareas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_tareas->Location = System::Drawing::Point(148, 77);
			this->txt_tareas->Name = L"txt_tareas";
			this->txt_tareas->Size = System::Drawing::Size(121, 22);
			this->txt_tareas->TabIndex = 33;
			this->txt_tareas->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_tareas_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(59, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 18);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Parcial 2";
			// 
			// txt_parcial2
			// 
			this->txt_parcial2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_parcial2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_parcial2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_parcial2->Location = System::Drawing::Point(148, 51);
			this->txt_parcial2->Name = L"txt_parcial2";
			this->txt_parcial2->Size = System::Drawing::Size(121, 22);
			this->txt_parcial2->TabIndex = 31;
			this->txt_parcial2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_parcial2_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(59, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 18);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Parcial 1";
			// 
			// txt_parcial1
			// 
			this->txt_parcial1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_parcial1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_parcial1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_parcial1->Location = System::Drawing::Point(148, 25);
			this->txt_parcial1->Name = L"txt_parcial1";
			this->txt_parcial1->Size = System::Drawing::Size(121, 22);
			this->txt_parcial1->TabIndex = 29;
			this->txt_parcial1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_parcial1_KeyPress);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_cancelar->Location = System::Drawing::Point(530, 144);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(104, 23);
			this->btn_cancelar->TabIndex = 28;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &AgregarAlumno::btn_cancelar_Click);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_guardar->Location = System::Drawing::Point(380, 144);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(108, 23);
			this->btn_guardar->TabIndex = 27;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &AgregarAlumno::btn_guardar_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(389, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 18);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Final";
			// 
			// txt_final
			// 
			this->txt_final->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_final->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_final->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_final->Location = System::Drawing::Point(478, 77);
			this->txt_final->Name = L"txt_final";
			this->txt_final->Size = System::Drawing::Size(121, 22);
			this->txt_final->TabIndex = 25;
			this->txt_final->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_final_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(389, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 18);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Bonos";
			// 
			// txt_bonos
			// 
			this->txt_bonos->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_bonos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_bonos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_bonos->Location = System::Drawing::Point(478, 51);
			this->txt_bonos->Name = L"txt_bonos";
			this->txt_bonos->Size = System::Drawing::Size(121, 22);
			this->txt_bonos->TabIndex = 23;
			this->txt_bonos->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_bonos_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Location = System::Drawing::Point(389, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 18);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Guias";
			// 
			// txt_guias
			// 
			this->txt_guias->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txt_guias->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_guias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_guias->Location = System::Drawing::Point(478, 25);
			this->txt_guias->Name = L"txt_guias";
			this->txt_guias->Size = System::Drawing::Size(121, 22);
			this->txt_guias->TabIndex = 21;
			this->txt_guias->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_guias_KeyPress);
			// 
			// panel_up
			// 
			this->panel_up->Controls->Add(this->btn_cursos);
			this->panel_up->Controls->Add(this->label3);
			this->panel_up->Controls->Add(this->label2);
			this->panel_up->Controls->Add(this->txt_carnet);
			this->panel_up->Controls->Add(this->label1);
			this->panel_up->Controls->Add(this->txt_nombre);
			this->panel_up->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_up->Location = System::Drawing::Point(0, 0);
			this->panel_up->Name = L"panel_up";
			this->panel_up->Size = System::Drawing::Size(662, 159);
			this->panel_up->TabIndex = 10;
			// 
			// btn_cursos
			// 
			this->btn_cursos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cursos->FormattingEnabled = true;
			this->btn_cursos->Location = System::Drawing::Point(128, 86);
			this->btn_cursos->Name = L"btn_cursos";
			this->btn_cursos->Size = System::Drawing::Size(170, 23);
			this->btn_cursos->TabIndex = 12;
			this->btn_cursos->Text = L"Seleccione un curso";
			this->btn_cursos->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarAlumno::btn_cursos_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(39, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Curso";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(39, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Carnet";
			// 
			// txt_carnet
			// 
			this->txt_carnet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_carnet->Location = System::Drawing::Point(128, 59);
			this->txt_carnet->Name = L"txt_carnet";
			this->txt_carnet->Size = System::Drawing::Size(170, 22);
			this->txt_carnet->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(39, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nombre";
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(128, 33);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(170, 22);
			this->txt_nombre->TabIndex = 7;
			this->txt_nombre->Enter += gcnew System::EventHandler(this, &AgregarAlumno::txt_nombre_Enter);
			this->txt_nombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AgregarAlumno::txt_nombre_KeyPress);
			// 
			// AgregarAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->ClientSize = System::Drawing::Size(662, 346);
			this->Controls->Add(this->panel_up);
			this->Controls->Add(this->panel_inferior);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AgregarAlumno";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AgregarAlumno";
			this->panel_inferior->ResumeLayout(false);
			this->panel_inferior->PerformLayout();
			this->panel_up->ResumeLayout(false);
			this->panel_up->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	


	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result =   MessageBox::Show(L"¿Desea salir sin guardar cambios?", "Salir", MessageBoxButtons::YesNo);
		
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
		   //eventos de botones
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"El alumno " + this->txt_nombre->Text + " ha sido agregado!");
		this->Close();
	}
	private: System::Void txt_nombre_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_nombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			MessageBox::Show(L"Debo sumar xd");
		}
	}
	private: System::Void txt_parcial1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			this->txt_total->Text = this->toSystemString(to_string(this->RetornarTotal()));
			this->CambiarColor();
		}
	}
	   //metodos de conversion std::string && system::string^
	public: static String^ toSystemString(string cadena)
	{
		return gcnew String(cadena.c_str());
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
	//-----------------------------------------

	public:  int RetornarTotal()
	{
		int n1 = atoi(this->toStandardString(this->txt_parcial1->Text).c_str());
		int n2 = atoi(this->toStandardString(this->txt_parcial2->Text).c_str());
		int n3 = atoi(this->toStandardString(this->txt_tareas->Text).c_str());
		int n4 = atoi(this->toStandardString(this->txt_bonos->Text).c_str());
		int n5 = atoi(this->toStandardString(this->txt_guias->Text).c_str());
		int n6 = atoi(this->toStandardString(this->txt_final->Text).c_str());
		return n1 + n2 + n3 + n4 + n5 + n6;

	}
	//Cargar cursos al comboBox
	public: void CargarDatos(string Mat[10][5], int tamanio)
	{
		for (int i = 0; i < tamanio; i++)
		{
			this->btn_cursos->Items->Add(this->toSystemString(Mat[i][0]));
		}
	}



	private: System::Void txt_parcial2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			this->txt_total->Text = this->toSystemString(to_string(this->RetornarTotal()));
			this->CambiarColor();
		}

	}
	private: System::Void txt_tareas_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			this->txt_total->Text = this->toSystemString(to_string(this->RetornarTotal()));
			this->CambiarColor();
		}
	}
	private: System::Void txt_guias_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			this->txt_total->Text = this->toSystemString(to_string(this->RetornarTotal()));
			this->CambiarColor();
		}
	}
	private: System::Void txt_bonos_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			this->txt_total->Text = this->toSystemString(to_string(this->RetornarTotal()));
			this->CambiarColor();
		}
	}


	private: System::Void txt_final_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter))
		{
			this->txt_total->Text = this->toSystemString(to_string(this->RetornarTotal()));
			this->CambiarColor();
		}
	}
	private: System::Void txt_total_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: void CambiarColor()
	{
		string cant = this->toStandardString(this->txt_total->Text);
		int n = atoi(cant.c_str());
		if (n < 61 && n > 0)
		{
			this->txt_total->ForeColor = Color::Red;
		}
		else if (n > 100)
		{
			this->txt_total->ForeColor = Color::Green;
		}
		else
		{
			this->txt_total->ForeColor = Color::Black;
		}

	}
private: System::Void btn_cursos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
