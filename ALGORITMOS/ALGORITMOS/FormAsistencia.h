#pragma once

namespace ALGORITMOS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormAsistencia
	/// </summary>
	public ref class FormAsistencia : public System::Windows::Forms::Form
	{
	public:
		FormAsistencia(void)
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
		~FormAsistencia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ lbl_alumno;
	private:
	public: System::Windows::Forms::RadioButton^ btn_asistencia;
	protected:


	private: System::Windows::Forms::Button^ btn_aceptar;
	private: System::Windows::Forms::Button^ btn_cancelar;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_alumno = (gcnew System::Windows::Forms::Label());
			this->btn_asistencia = (gcnew System::Windows::Forms::RadioButton());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(212, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Asistencia de Alumno";
			// 
			// lbl_alumno
			// 
			this->lbl_alumno->AutoSize = true;
			this->lbl_alumno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_alumno->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->lbl_alumno->Location = System::Drawing::Point(253, 105);
			this->lbl_alumno->Name = L"lbl_alumno";
			this->lbl_alumno->Size = System::Drawing::Size(0, 18);
			this->lbl_alumno->TabIndex = 1;
			// 
			// btn_asistencia
			// 
			this->btn_asistencia->AutoSize = true;
			this->btn_asistencia->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_asistencia->Location = System::Drawing::Point(393, 100);
			this->btn_asistencia->Name = L"btn_asistencia";
			this->btn_asistencia->Size = System::Drawing::Size(73, 17);
			this->btn_asistencia->TabIndex = 2;
			this->btn_asistencia->TabStop = true;
			this->btn_asistencia->Text = L"Asistencia";
			this->btn_asistencia->UseVisualStyleBackColor = true;
			// 
			// btn_aceptar
			// 
			this->btn_aceptar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_aceptar->FlatAppearance->BorderSize = 0;
			this->btn_aceptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_aceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_aceptar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_aceptar->Location = System::Drawing::Point(198, 237);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(103, 23);
			this->btn_aceptar->TabIndex = 3;
			this->btn_aceptar->Text = L"Aceptar";
			this->btn_aceptar->UseVisualStyleBackColor = false;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &FormAsistencia::btn_aceptar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_cancelar->Location = System::Drawing::Point(350, 237);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(103, 23);
			this->btn_cancelar->TabIndex = 4;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &FormAsistencia::btn_cancelar_Click);
			// 
			// FormAsistencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(646, 307);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->btn_asistencia);
			this->Controls->Add(this->lbl_alumno);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAsistencia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormAsistencia";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Se ha guardado correctamente la informacion");
		this->Close();
	}
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"No se guardara ninguna informacion");
		this->Close();
	}
};
}
