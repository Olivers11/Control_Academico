#pragma once
#include <vector>
#include <algorithm>
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
	/// Resumen de VistaAlumnos
	/// </summary>
	public ref class VistaAlumnos : public System::Windows::Forms::Form
	{
	public:
		VistaAlumnos(void)
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
		~VistaAlumnos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_principal;
	protected:
	private: System::Windows::Forms::DataGridView^ data_uno;

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
			this->panel_principal = (gcnew System::Windows::Forms::Panel());
			this->data_uno = (gcnew System::Windows::Forms::DataGridView());
			this->panel_principal->SuspendLayout();
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
			this->panel_principal->Controls->Add(this->data_uno);
			this->panel_principal->Location = System::Drawing::Point(0, 0);
			this->panel_principal->Name = L"panel_principal";
			this->panel_principal->Size = System::Drawing::Size(613, 278);
			this->panel_principal->TabIndex = 0;
			this->panel_principal->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VistaAlumnos::panel_principal_Paint);
			// 
			// data_uno
			// 
			this->data_uno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->data_uno->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->data_uno->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data_uno->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_uno->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_uno->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_uno->EnableHeadersVisualStyles = false;
			this->data_uno->GridColor = System::Drawing::Color::SteelBlue;
			this->data_uno->Location = System::Drawing::Point(29, 28);
			this->data_uno->Name = L"data_uno";
			this->data_uno->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_uno->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->data_uno->RowHeadersVisible = false;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			this->data_uno->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->data_uno->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->data_uno->Size = System::Drawing::Size(555, 225);
			this->data_uno->TabIndex = 0;
			this->data_uno->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VistaAlumnos::data_uno_CellContentClick);
			// 
			// VistaAlumnos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 278);
			this->Controls->Add(this->panel_principal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VistaAlumnos";
			this->Text = L"VistaAlumnos";
			this->panel_principal->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_uno))->EndInit();
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: System::Void panel_principal_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		public: void LlenarGrid(string Mat[10][5])
		{
			this->data_uno->Columns->Add("Index", "Nombre");
			this->data_uno->Columns->Add("Cod", "Codigo");
			this->data_uno->Columns->Add("cat", "Catedratico");
			this->data_uno->Columns->Add("fac", "Facultad");
			this->data_uno->Columns->Add("fac", "Año");  
			for (int i = 0; i < 10; i++)
			{
				cli::array<String^>^ row = { this->Convertir(Mat[i][0]), this->Convertir(Mat[i][1]), this->Convertir(Mat[i][2]), this->Convertir(Mat[i][3]), this->Convertir(Mat[i][4]) };
				data_uno->Rows->Add(row);
			}
			


		}
		public: String^ Convertir(string cadena)
		{
			String^ str = gcnew String(cadena.c_str());
			return str;
		}
	private: System::Void data_uno_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
