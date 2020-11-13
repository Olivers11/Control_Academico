#pragma once
#include "MyForm.h"
#include "AgregarAlumno.h"
#include "VistaAlumnos.h"
#include "ReporteAlumnos.h"
#include "Alumno.h"
#include <vector>
#include <algorithm>
#include <fstream>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//objeto principal de la logica
	string mat[10][5];
	vector<Alumno> alumnos;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ barra;
	protected:
	private: System::Windows::Forms::Panel^ panel_lateral;
	private: System::Windows::Forms::Panel^ panel_menu;
	private: System::Windows::Forms::Button^ btn_cursos;
	private: System::Windows::Forms::Button^ btn_alumnos;
	private: System::Windows::Forms::Button^ btn_addAl;
	private: System::Windows::Forms::Button^ btn_addC;
	private: System::Windows::Forms::Panel^ panel_margen;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::Panel^ panel_image;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private:
		
		ALGORITMOS::MyForm^ form2 = gcnew(ALGORITMOS::MyForm);
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->barra = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->btn_cursos = (gcnew System::Windows::Forms::Button());
			this->btn_alumnos = (gcnew System::Windows::Forms::Button());
			this->btn_addAl = (gcnew System::Windows::Forms::Button());
			this->btn_addC = (gcnew System::Windows::Forms::Button());
			this->panel_margen = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel_image = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->barra->SuspendLayout();
			this->panel_lateral->SuspendLayout();
			this->panel_menu->SuspendLayout();
			this->panel_contenedor->SuspendLayout();
			this->panel_image->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// barra
			// 
			this->barra->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->barra->Controls->Add(this->button3);
			this->barra->Controls->Add(this->button2);
			this->barra->Controls->Add(this->button1);
			this->barra->Dock = System::Windows::Forms::DockStyle::Top;
			this->barra->Location = System::Drawing::Point(0, 0);
			this->barra->Name = L"barra";
			this->barra->Size = System::Drawing::Size(865, 29);
			this->barra->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::LightGray;
			this->button3->Location = System::Drawing::Point(756, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"-----";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(796, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 27);
			this->button2->TabIndex = 1;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(827, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(23, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel_lateral->Controls->Add(this->panel_menu);
			this->panel_lateral->Controls->Add(this->panel_margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 29);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(158, 401);
			this->panel_lateral->TabIndex = 1;
			// 
			// panel_menu
			// 
			this->panel_menu->Controls->Add(this->btn_cursos);
			this->panel_menu->Controls->Add(this->btn_alumnos);
			this->panel_menu->Controls->Add(this->btn_addAl);
			this->panel_menu->Controls->Add(this->btn_addC);
			this->panel_menu->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_menu->Location = System::Drawing::Point(0, 124);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(158, 197);
			this->panel_menu->TabIndex = 1;
			// 
			// btn_cursos
			// 
			this->btn_cursos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cursos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_cursos->FlatAppearance->BorderSize = 0;
			this->btn_cursos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_cursos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cursos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cursos->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_cursos->Location = System::Drawing::Point(0, 117);
			this->btn_cursos->Name = L"btn_cursos";
			this->btn_cursos->Size = System::Drawing::Size(158, 39);
			this->btn_cursos->TabIndex = 3;
			this->btn_cursos->Text = L"Ver Cursos";
			this->btn_cursos->UseVisualStyleBackColor = true;
			this->btn_cursos->Click += gcnew System::EventHandler(this, &Form1::btn_cursos_Click);
			// 
			// btn_alumnos
			// 
			this->btn_alumnos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_alumnos->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_alumnos->FlatAppearance->BorderSize = 0;
			this->btn_alumnos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_alumnos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_alumnos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_alumnos->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_alumnos->Location = System::Drawing::Point(0, 78);
			this->btn_alumnos->Name = L"btn_alumnos";
			this->btn_alumnos->Size = System::Drawing::Size(158, 39);
			this->btn_alumnos->TabIndex = 2;
			this->btn_alumnos->Text = L"Alumnos";
			this->btn_alumnos->UseVisualStyleBackColor = true;
			this->btn_alumnos->Click += gcnew System::EventHandler(this, &Form1::btn_alumnos_Click);
			// 
			// btn_addAl
			// 
			this->btn_addAl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addAl->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_addAl->FlatAppearance->BorderSize = 0;
			this->btn_addAl->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_addAl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addAl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addAl->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_addAl->Location = System::Drawing::Point(0, 39);
			this->btn_addAl->Name = L"btn_addAl";
			this->btn_addAl->Size = System::Drawing::Size(158, 39);
			this->btn_addAl->TabIndex = 1;
			this->btn_addAl->Text = L"Nuevo Alumno";
			this->btn_addAl->UseVisualStyleBackColor = true;
			this->btn_addAl->Click += gcnew System::EventHandler(this, &Form1::btn_addAl_Click);
			// 
			// btn_addC
			// 
			this->btn_addC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addC->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_addC->FlatAppearance->BorderSize = 0;
			this->btn_addC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->btn_addC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addC->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_addC->Location = System::Drawing::Point(0, 0);
			this->btn_addC->Name = L"btn_addC";
			this->btn_addC->Size = System::Drawing::Size(158, 39);
			this->btn_addC->TabIndex = 0;
			this->btn_addC->Text = L"Agregar Curso";
			this->btn_addC->UseVisualStyleBackColor = true;
			this->btn_addC->Click += gcnew System::EventHandler(this, &Form1::btn_addC_Click);
			// 
			// panel_margen
			// 
			this->panel_margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen->Location = System::Drawing::Point(0, 0);
			this->panel_margen->Name = L"panel_margen";
			this->panel_margen->Size = System::Drawing::Size(158, 124);
			this->panel_margen->TabIndex = 0;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_contenedor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->panel_contenedor->Controls->Add(this->panel_image);
			this->panel_contenedor->Location = System::Drawing::Point(165, 32);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(693, 391);
			this->panel_contenedor->TabIndex = 2;
			// 
			// panel_image
			// 
			this->panel_image->Controls->Add(this->pictureBox1);
			this->panel_image->Location = System::Drawing::Point(20, 15);
			this->panel_image->Name = L"panel_image";
			this->panel_image->Size = System::Drawing::Size(636, 343);
			this->panel_image->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(636, 343);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->ClientSize = System::Drawing::Size(865, 430);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->Controls->Add(this->barra);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Control Academico";
			this->barra->ResumeLayout(false);
			this->panel_lateral->ResumeLayout(false);
			this->panel_menu->ResumeLayout(false);
			this->panel_contenedor->ResumeLayout(false);
			this->panel_image->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion	

	public: int tamanio = 0;
	//btn para abrir formulario de Curso
	private: System::Void btn_addC_Click(System::Object^ sender, System::EventArgs^ e) {
		ALGORITMOS::MyForm^ f2 = gcnew(ALGORITMOS::MyForm);
		this->Visible = false;
		f2->ShowDialog();
		//MessageBox::Show(f2->txt_nombre->Text);
		if (this->toStandardString(f2->txt_nombre->Text) != "")
		{
			this->InsertarInfo(this->toStandardString(f2->txt_nombre->Text), this->toStandardString(f2->txt_codigo->Text), this->toStandardString(f2->txt_cat->Text), this->toStandardString(f2->txt_facultad->Text), this->toStandardString(f2->txt_anio->Text));
			this->tamanio++;
		}
		this->Visible = true;
	}

	public: void LimpiarPanel()
	{
		if (this->panel_contenedor->Controls->Count > 0)
		{
			this->panel_contenedor->Controls->RemoveAt(0);
		}
	}

	//-------------------------------------------
	//metodos de insercion a backend	        |
	//-------------------------------------------
	public: void InsertarInfo(string c1, string c2, string c3, string c4, string c5)
	{
		mat[this->tamanio][0] = c1;
		mat[this->tamanio][1] = c2;
		mat[this->tamanio][2] = c3;
		mat[this->tamanio][3] = c4;
		mat[this->tamanio][4] = c5;
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
	
	//metodo para abrir un nuevo frmulario dentro del panel
	public: void AbrirFormulario(Form^ hijo)
	{
		if (this->panel_contenedor->Controls->Count > 0)
		{
			this->panel_contenedor->Controls->RemoveAt(0);
		}
		hijo->TopLevel = false;
		hijo->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(hijo);
		this->panel_contenedor->Tag = hijo;
		//this->Hide();
		hijo->Show();
	}
	private: System::Void btn_addAl_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (mat[0][0] != "")
		{
			ALGORITMOS::AgregarAlumno^ f3 = gcnew(ALGORITMOS::AgregarAlumno);
			this->Visible = false;
			f3->CargarDatos(mat, this->tamanio);
			f3->ShowDialog();
			if (this->toStandardString(f3->txt_nombre->Text) != "")
			{
				Alumno v1 = Alumno();
				int pos = 0;
				string aux = this->toStandardString(f3->txt_total->Text);
				for (int i = 0; i < this->tamanio; i++)
				{
					if (aux == mat[i][0])
					{
						pos = i;
						break;
					}
				}
				aux = this->toStandardString(f3->txt_total->Text);
				float z = atof(aux.c_str());
				float p1 = atof(this->toStandardString(f3->txt_parcial1->Text).c_str());
				float p2 = atof(this->toStandardString(f3->txt_parcial2->Text).c_str());
				float ex = atof(this->toStandardString(f3->txt_final->Text).c_str());
				float ac = atof(this->toStandardString(f3->txt_tareas->Text).c_str());
				v1.insertarDatos(this->toStandardString(f3->txt_nombre->Text), this->toStandardString(f3->txt_carnet->Text), pos, z, ac, p1, p2, ex);
				alumnos.push_back(v1);
			}
			else
			{
				MessageBox::Show(L"No se agrego nada");
			}
		}
		else
		{
			MessageBox::Show(L"Antes debe agregar un curso(como minimo) ");
		}
		this->Visible = true;
		
	}
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_cursos_Click(System::Object^ sender, System::EventArgs^ e) {
		ALGORITMOS::VistaAlumnos^ f2 = gcnew(ALGORITMOS::VistaAlumnos);
		this->AbrirFormulario(f2);
		if (mat[0][0] != "")
		{
			f2->LlenarGrid(mat);
		}
		else
		{
			MessageBox::Show(L"No hay ningun curso registrado, registre primero para habilitar la vista");
		}
		
	}

	private: System::Void btn_alumnos_Click(System::Object^ sender, System::EventArgs^ e) {
		ALGORITMOS::ReporteAlumnos^ f2 =  gcnew(ALGORITMOS::ReporteAlumnos);
		this->AbrirFormulario(f2);
		if (alumnos.size() > 0)
		{
			f2->LlenarDatos(alumnos, mat);
		}
		else
		{
			
		}
		
	}
};
}
