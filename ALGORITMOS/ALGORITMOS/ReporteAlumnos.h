#pragma once

#include "Alumno.h"
#include "FormAsistencia.h"
#include <vector>
#include <algorithm>
#include <string>


namespace ALGORITMOS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReporteAlumnos
	/// </summary>
	public ref class ReporteAlumnos : public System::Windows::Forms::Form
	{
	public:
		ReporteAlumnos(void)
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
		~ReporteAlumnos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_principal;
	protected:
	private: System::Windows::Forms::DataGridView^ data_uno;
	private: System::Windows::Forms::DataGridView^ dataGrid;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel_principal = (gcnew System::Windows::Forms::Panel());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->data_uno = (gcnew System::Windows::Forms::DataGridView());
			this->panel_principal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_uno))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_principal
			// 
			this->panel_principal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_principal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->panel_principal->Controls->Add(this->dataGrid);
			this->panel_principal->Controls->Add(this->data_uno);
			this->panel_principal->Location = System::Drawing::Point(-1, -2);
			this->panel_principal->Name = L"panel_principal";
			this->panel_principal->Size = System::Drawing::Size(664, 348);
			this->panel_principal->TabIndex = 1;
			// 
			// dataGrid
			// 
			this->dataGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGrid->EnableHeadersVisualStyles = false;
			this->dataGrid->GridColor = System::Drawing::Color::SteelBlue;
			this->dataGrid->Location = System::Drawing::Point(0, 0);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGrid->RowHeadersVisible = false;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			this->dataGrid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGrid->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGrid->Size = System::Drawing::Size(664, 348);
			this->dataGrid->TabIndex = 1;
			this->dataGrid->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReporteAlumnos::dataGrid_CellDoubleClick);
			// 
			// data_uno
			// 
			this->data_uno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->data_uno->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->data_uno->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data_uno->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_uno->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->data_uno->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_uno->EnableHeadersVisualStyles = false;
			this->data_uno->GridColor = System::Drawing::Color::SteelBlue;
			this->data_uno->Location = System::Drawing::Point(29, 28);
			this->data_uno->Name = L"data_uno";
			this->data_uno->ReadOnly = true;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_uno->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->data_uno->RowHeadersVisible = false;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			this->data_uno->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->data_uno->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->data_uno->Size = System::Drawing::Size(555, 295);
			this->data_uno->TabIndex = 0;
			// 
			// ReporteAlumnos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 346);
			this->Controls->Add(this->panel_principal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReporteAlumnos";
			this->Text = L"ReporteAlumnos";
			this->panel_principal->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_uno))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: void LlenarDatos(vector<Alumno> v1, string Mat[10][5])
		{
			this->dataGrid->Columns->Add("Index", "Nombre");
			this->dataGrid->Columns->Add("cat", "Curso");
			this->dataGrid->Columns->Add("cur", "Actividades");
			this->dataGrid->Columns->Add("cur", "Parcial 1");
			this->dataGrid->Columns->Add("cur", "Parcial 2");
			this->dataGrid->Columns->Add("ex", "Final");
			this->dataGrid->Columns->Add("fac", "Nota Final");
			
			for (int i = 0; i < v1.size(); i++)
			{
				string z = to_string(v1[i].retornarZona());
				string ac = to_string(v1[i].retornarActividades());
				string p1 = to_string(v1[i].parcialUno());
				string p2 = to_string(v1[i].parcialDos());
				string exa = to_string(v1[i].retornarExamen());
				cli::array<String^>^ row = { this->toSystemString(v1[i].RetornarNombre()),  this->toSystemString(Mat[v1[i].retornarCurso()][0]), this->toSystemString(ac), this->toSystemString(p1),this->toSystemString(p2), this->toSystemString(exa) ,this->toSystemString(z) };
				this->dataGrid->Rows->Add(row);
			}



		}

		public: String^ toSystemString(string cadena)
		{
			String^ str = gcnew String(cadena.c_str());
			return str;
		}
		private: System::Void dataGrid_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			int n = e->RowIndex;
			string nombre = this->toStandardString(this->dataGrid->Rows[n]->Cells[0]->Value->ToString());
			ALGORITMOS::FormAsistencia^ f2 = gcnew(ALGORITMOS::FormAsistencia);
			this->Visible = false;
			f2->lbl_alumno->Text = this->toSystemString(nombre);
			f2->ShowDialog();
			this->Visible = true;
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


};
}
