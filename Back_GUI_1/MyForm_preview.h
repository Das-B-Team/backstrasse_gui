#pragma once
#include "Plaetzchen.h"

namespace BackGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm_preview
	/// </summary>
	public ref class MyForm_preview : public System::Windows::Forms::Form
	{
	public:
		MyForm_preview(Plaetzchen^ P) : p{ P }
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
		~MyForm_preview()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1_ok;
		   Plaetzchen^ p;
	protected:

	protected:

	protected:

	private:
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
			this->button1_ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1_ok
			// 
			this->button1_ok->Location = System::Drawing::Point(95, 194);
			this->button1_ok->Name = L"button1_ok";
			this->button1_ok->Size = System::Drawing::Size(75, 23);
			this->button1_ok->TabIndex = 0;
			this->button1_ok->Text = L"OK";
			this->button1_ok->UseVisualStyleBackColor = true;
			this->button1_ok->Click += gcnew System::EventHandler(this, &MyForm_preview::Button1_ok_Click);
			// 
			// MyForm_preview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1_ok);
			this->Name = L"MyForm_preview";
			this->Text = L"MyForm_preview";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm_preview::MyForm_preview_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_ok_Click(System::Object^ sender, System::EventArgs^ e);
	
	//private: System::Void MyForm_preview_EnabledChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_preview_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		     System::Void BackGUI1::MyForm_preview::MyForm_preview_zeichne();
	};
}
