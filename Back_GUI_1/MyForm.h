#pragma once
#include "MyForm_preview.h"
#include "Plaetzchen.h"
#include "Guss.h"
#include "Streusel.h"
#include "Nuesse.h"

namespace BackGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	
	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1_anz_blaetz;
	protected:
	private: System::Windows::Forms::Label^ label1_anz_blae;



	private: System::Windows::Forms::Button^ button1_vorschau;
		   BackGUI1::MyForm_preview^ mf2; // Fenster 2 dekleration
	private: System::Windows::Forms::GroupBox^ groupBox1_form_teig;
	private: System::Windows::Forms::CheckBox^ checkBox1_dunkler_Teig;

	private: System::Windows::Forms::RadioButton^ radioButton4_Kreis;
	private: System::Windows::Forms::RadioButton^ radioButton3_Quadrat;
	private: System::Windows::Forms::RadioButton^ radioButton2_Gringel;
	private: System::Windows::Forms::RadioButton^ radioButton1_Stern;




	private: System::Windows::Forms::Label^ label5_rund;

	private: System::Windows::Forms::Label^ label4_quadrat;
	public protected: System::Windows::Forms::Label^ label3_gringle;
	private:



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1_star;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4_Backzeit;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3_Backtemp;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2_sizeY;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1_sizeX;

	private: System::Windows::Forms::Label^ label1_X;
	private: System::Windows::Forms::GroupBox^ groupBox2_Verzierung;






	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1_konfig_schreiben;
	private: System::Windows::Forms::Button^ button1_Exit;
	private: System::Windows::Forms::GroupBox^ groupBox2_Verz_1;
	private: System::Windows::Forms::ComboBox^ comboBox3_Verz1;

	private: System::Windows::Forms::RadioButton^ radioButton3_Verz1_Nuesse;
	private: System::Windows::Forms::RadioButton^ radioButton2_Verz1_Streusel;
	private: System::Windows::Forms::RadioButton^ radioButton1_Verz1_Guss;



	private: System::Windows::Forms::GroupBox^ groupBox3_Verz3;
	private: System::Windows::Forms::ComboBox^ comboBox2_Verz3;

	private: System::Windows::Forms::RadioButton^ radioButton4_Verz3_Nuesse;
	private: System::Windows::Forms::RadioButton^ radioButton5_Verz3_Streusel;
	private: System::Windows::Forms::RadioButton^ radioButton6_Verz3_Guss;



	private: System::Windows::Forms::GroupBox^ groupBox2_Verz2;
	private: System::Windows::Forms::ComboBox^ comboBox1_Verz2;

	private: System::Windows::Forms::RadioButton^ radioButton1_Verz2_Nuesse;
	private: System::Windows::Forms::RadioButton^ radioButton2_Verz2_Streusel;
	private: System::Windows::Forms::RadioButton^ radioButton3_Verz2_Guss;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;
		Verzierung::Color getColor_as_enum(String^ s);
		Verzierung ^v1, ^v2, ^v3;
		System::Void showStatusMsg(String^);
		System::Void clearStatusMsg();
		Plaetzchen^ createPlaetzchen();
		Plaetzchen^ p;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1_anz_blaetz = (gcnew System::Windows::Forms::TextBox());
			this->label1_anz_blae = (gcnew System::Windows::Forms::Label());
			this->button1_vorschau = (gcnew System::Windows::Forms::Button());
			this->groupBox1_form_teig = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1_dunkler_Teig = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton4_Kreis = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3_Quadrat = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_Gringel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1_Stern = (gcnew System::Windows::Forms::RadioButton());
			this->label5_rund = (gcnew System::Windows::Forms::Label());
			this->label4_quadrat = (gcnew System::Windows::Forms::Label());
			this->label3_gringle = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1_star = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4_Backzeit = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3_Backtemp = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2_sizeY = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1_sizeX = (gcnew System::Windows::Forms::TextBox());
			this->label1_X = (gcnew System::Windows::Forms::Label());
			this->groupBox2_Verzierung = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3_Verz3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2_Verz3 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton4_Verz3_Nuesse = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5_Verz3_Streusel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6_Verz3_Guss = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2_Verz2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1_Verz2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1_Verz2_Nuesse = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_Verz2_Streusel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3_Verz2_Guss = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2_Verz_1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3_Verz1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton3_Verz1_Nuesse = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_Verz1_Streusel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1_Verz1_Guss = (gcnew System::Windows::Forms::RadioButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1_konfig_schreiben = (gcnew System::Windows::Forms::Button());
			this->button1_Exit = (gcnew System::Windows::Forms::Button());
			this->groupBox1_form_teig->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2_Verzierung->SuspendLayout();
			this->groupBox3_Verz3->SuspendLayout();
			this->groupBox2_Verz2->SuspendLayout();
			this->groupBox2_Verz_1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1_anz_blaetz
			// 
			this->textBox1_anz_blaetz->Location = System::Drawing::Point(305, 44);
			this->textBox1_anz_blaetz->Name = L"textBox1_anz_blaetz";
			this->textBox1_anz_blaetz->Size = System::Drawing::Size(100, 20);
			this->textBox1_anz_blaetz->TabIndex = 0;
			this->textBox1_anz_blaetz->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_anz_blaetz_Leave);
			// 
			// label1_anz_blae
			// 
			this->label1_anz_blae->AutoSize = true;
			this->label1_anz_blae->Location = System::Drawing::Point(189, 47);
			this->label1_anz_blae->Name = L"label1_anz_blae";
			this->label1_anz_blae->Size = System::Drawing::Size(120, 13);
			this->label1_anz_blae->TabIndex = 1;
			this->label1_anz_blae->Text = L"Anzahl Plätzchen TEST";
			// 
			// button1_vorschau
			// 
			this->button1_vorschau->Enabled = false;
			this->button1_vorschau->Location = System::Drawing::Point(104, 533);
			this->button1_vorschau->Name = L"button1_vorschau";
			this->button1_vorschau->Size = System::Drawing::Size(75, 23);
			this->button1_vorschau->TabIndex = 7;
			this->button1_vorschau->Text = L"Vorschau";
			this->button1_vorschau->UseVisualStyleBackColor = true;
			this->button1_vorschau->Click += gcnew System::EventHandler(this, &MyForm::Button1_vorschau_Click);
			// 
			// groupBox1_form_teig
			// 
			this->groupBox1_form_teig->BackColor = System::Drawing::Color::LightYellow;
			this->groupBox1_form_teig->Controls->Add(this->checkBox1_dunkler_Teig);
			this->groupBox1_form_teig->Controls->Add(this->radioButton4_Kreis);
			this->groupBox1_form_teig->Controls->Add(this->radioButton3_Quadrat);
			this->groupBox1_form_teig->Controls->Add(this->radioButton2_Gringel);
			this->groupBox1_form_teig->Controls->Add(this->radioButton1_Stern);
			this->groupBox1_form_teig->Controls->Add(this->label5_rund);
			this->groupBox1_form_teig->Controls->Add(this->label4_quadrat);
			this->groupBox1_form_teig->Controls->Add(this->label3_gringle);
			this->groupBox1_form_teig->Controls->Add(this->label2);
			this->groupBox1_form_teig->Controls->Add(this->label1_star);
			this->groupBox1_form_teig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1_form_teig->Location = System::Drawing::Point(19, 155);
			this->groupBox1_form_teig->Name = L"groupBox1_form_teig";
			this->groupBox1_form_teig->Size = System::Drawing::Size(200, 229);
			this->groupBox1_form_teig->TabIndex = 8;
			this->groupBox1_form_teig->TabStop = false;
			this->groupBox1_form_teig->Text = L"Form / Teigart";
			// 
			// checkBox1_dunkler_Teig
			// 
			this->checkBox1_dunkler_Teig->AutoSize = true;
			this->checkBox1_dunkler_Teig->Location = System::Drawing::Point(77, 178);
			this->checkBox1_dunkler_Teig->Name = L"checkBox1_dunkler_Teig";
			this->checkBox1_dunkler_Teig->Size = System::Drawing::Size(85, 17);
			this->checkBox1_dunkler_Teig->TabIndex = 9;
			this->checkBox1_dunkler_Teig->Text = L"dunkler Teig";
			this->checkBox1_dunkler_Teig->UseVisualStyleBackColor = true;
			// 
			// radioButton4_Kreis
			// 
			this->radioButton4_Kreis->AutoSize = true;
			this->radioButton4_Kreis->Location = System::Drawing::Point(72, 133);
			this->radioButton4_Kreis->Name = L"radioButton4_Kreis";
			this->radioButton4_Kreis->Size = System::Drawing::Size(48, 17);
			this->radioButton4_Kreis->TabIndex = 8;
			this->radioButton4_Kreis->TabStop = true;
			this->radioButton4_Kreis->Text = L"Kreis";
			this->radioButton4_Kreis->UseVisualStyleBackColor = true;
			this->radioButton4_Kreis->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_Kreis_CheckedChanged);
			// 
			// radioButton3_Quadrat
			// 
			this->radioButton3_Quadrat->AutoSize = true;
			this->radioButton3_Quadrat->Location = System::Drawing::Point(72, 101);
			this->radioButton3_Quadrat->Name = L"radioButton3_Quadrat";
			this->radioButton3_Quadrat->Size = System::Drawing::Size(63, 17);
			this->radioButton3_Quadrat->TabIndex = 7;
			this->radioButton3_Quadrat->TabStop = true;
			this->radioButton3_Quadrat->Text = L"Quadrat";
			this->radioButton3_Quadrat->UseVisualStyleBackColor = true;
			this->radioButton3_Quadrat->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_Quadrat_CheckedChanged);
			// 
			// radioButton2_Gringel
			// 
			this->radioButton2_Gringel->AutoSize = true;
			this->radioButton2_Gringel->Location = System::Drawing::Point(72, 73);
			this->radioButton2_Gringel->Name = L"radioButton2_Gringel";
			this->radioButton2_Gringel->Size = System::Drawing::Size(58, 17);
			this->radioButton2_Gringel->TabIndex = 6;
			this->radioButton2_Gringel->TabStop = true;
			this->radioButton2_Gringel->Text = L"Gringel";
			this->radioButton2_Gringel->UseVisualStyleBackColor = true;
			this->radioButton2_Gringel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_Gringel_CheckedChanged);
			// 
			// radioButton1_Stern
			// 
			this->radioButton1_Stern->AutoSize = true;
			this->radioButton1_Stern->Location = System::Drawing::Point(72, 40);
			this->radioButton1_Stern->Name = L"radioButton1_Stern";
			this->radioButton1_Stern->Size = System::Drawing::Size(50, 17);
			this->radioButton1_Stern->TabIndex = 5;
			this->radioButton1_Stern->TabStop = true;
			this->radioButton1_Stern->Text = L"Stern";
			this->radioButton1_Stern->UseVisualStyleBackColor = true;
			this->radioButton1_Stern->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_Stern_CheckedChanged);
			// 
			// label5_rund
			// 
			this->label5_rund->AutoSize = true;
			this->label5_rund->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5_rund.Image")));
			this->label5_rund->Location = System::Drawing::Point(21, 130);
			this->label5_rund->MinimumSize = System::Drawing::Size(20, 20);
			this->label5_rund->Name = L"label5_rund";
			this->label5_rund->Size = System::Drawing::Size(20, 20);
			this->label5_rund->TabIndex = 4;
			// 
			// label4_quadrat
			// 
			this->label4_quadrat->AutoSize = true;
			this->label4_quadrat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4_quadrat.Image")));
			this->label4_quadrat->Location = System::Drawing::Point(21, 98);
			this->label4_quadrat->MinimumSize = System::Drawing::Size(20, 20);
			this->label4_quadrat->Name = L"label4_quadrat";
			this->label4_quadrat->Size = System::Drawing::Size(20, 20);
			this->label4_quadrat->TabIndex = 3;
			// 
			// label3_gringle
			// 
			this->label3_gringle->AutoSize = true;
			this->label3_gringle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3_gringle.Image")));
			this->label3_gringle->Location = System::Drawing::Point(21, 70);
			this->label3_gringle->MinimumSize = System::Drawing::Size(20, 20);
			this->label3_gringle->Name = L"label3_gringle";
			this->label3_gringle->Size = System::Drawing::Size(20, 20);
			this->label3_gringle->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(21, 37);
			this->label2->MinimumSize = System::Drawing::Size(20, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 1;
			// 
			// label1_star
			// 
			this->label1_star->AutoSize = true;
			this->label1_star->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1_star.Image")));
			this->label1_star->Location = System::Drawing::Point(6, 40);
			this->label1_star->Name = L"label1_star";
			this->label1_star->Size = System::Drawing::Size(0, 13);
			this->label1_star->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox4_Backzeit);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3_Backtemp);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2_sizeY);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1_sizeX);
			this->groupBox1->Controls->Add(this->label1_X);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(237, 155);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(193, 229);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Groesse / Backtemp. / Backzeit";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(160, 163);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"min.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(160, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"°C";
			// 
			// textBox4_Backzeit
			// 
			this->textBox4_Backzeit->Location = System::Drawing::Point(104, 157);
			this->textBox4_Backzeit->Name = L"textBox4_Backzeit";
			this->textBox4_Backzeit->Size = System::Drawing::Size(49, 20);
			this->textBox4_Backzeit->TabIndex = 9;
			this->textBox4_Backzeit->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Backzeit_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Backzeit";
			// 
			// textBox3_Backtemp
			// 
			this->textBox3_Backtemp->Location = System::Drawing::Point(104, 123);
			this->textBox3_Backtemp->Name = L"textBox3_Backtemp";
			this->textBox3_Backtemp->Size = System::Drawing::Size(49, 20);
			this->textBox3_Backtemp->TabIndex = 7;
			this->textBox3_Backtemp->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Backtemp_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Backtemperatur";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(92, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"mm";
			// 
			// textBox2_sizeY
			// 
			this->textBox2_sizeY->Location = System::Drawing::Point(53, 72);
			this->textBox2_sizeY->Name = L"textBox2_sizeY";
			this->textBox2_sizeY->Size = System::Drawing::Size(32, 20);
			this->textBox2_sizeY->TabIndex = 4;
			this->textBox2_sizeY->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_sizeY_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Y";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"mm";
			// 
			// textBox1_sizeX
			// 
			this->textBox1_sizeX->Location = System::Drawing::Point(53, 42);
			this->textBox1_sizeX->Name = L"textBox1_sizeX";
			this->textBox1_sizeX->Size = System::Drawing::Size(32, 20);
			this->textBox1_sizeX->TabIndex = 1;
			this->textBox1_sizeX->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_sizeX_Leave);
			// 
			// label1_X
			// 
			this->label1_X->AutoSize = true;
			this->label1_X->Location = System::Drawing::Point(18, 46);
			this->label1_X->Name = L"label1_X";
			this->label1_X->Size = System::Drawing::Size(14, 13);
			this->label1_X->TabIndex = 0;
			this->label1_X->Text = L"X";
			// 
			// groupBox2_Verzierung
			// 
			this->groupBox2_Verzierung->Controls->Add(this->groupBox3_Verz3);
			this->groupBox2_Verzierung->Controls->Add(this->groupBox2_Verz2);
			this->groupBox2_Verzierung->Controls->Add(this->groupBox2_Verz_1);
			this->groupBox2_Verzierung->Controls->Add(this->label12);
			this->groupBox2_Verzierung->Controls->Add(this->label11);
			this->groupBox2_Verzierung->Controls->Add(this->label10);
			this->groupBox2_Verzierung->Controls->Add(this->label9);
			this->groupBox2_Verzierung->Location = System::Drawing::Point(461, 155);
			this->groupBox2_Verzierung->Name = L"groupBox2_Verzierung";
			this->groupBox2_Verzierung->Size = System::Drawing::Size(233, 229);
			this->groupBox2_Verzierung->TabIndex = 10;
			this->groupBox2_Verzierung->TabStop = false;
			this->groupBox2_Verzierung->Text = L"Verzierung";
			// 
			// groupBox3_Verz3
			// 
			this->groupBox3_Verz3->Controls->Add(this->comboBox2_Verz3);
			this->groupBox3_Verz3->Controls->Add(this->radioButton4_Verz3_Nuesse);
			this->groupBox3_Verz3->Controls->Add(this->radioButton5_Verz3_Streusel);
			this->groupBox3_Verz3->Controls->Add(this->radioButton6_Verz3_Guss);
			this->groupBox3_Verz3->Location = System::Drawing::Point(60, 9);
			this->groupBox3_Verz3->Name = L"groupBox3_Verz3";
			this->groupBox3_Verz3->Size = System::Drawing::Size(167, 62);
			this->groupBox3_Verz3->TabIndex = 12;
			this->groupBox3_Verz3->TabStop = false;
			// 
			// comboBox2_Verz3
			// 
			this->comboBox2_Verz3->BackColor = System::Drawing::Color::LightYellow;
			this->comboBox2_Verz3->FormattingEnabled = true;
			this->comboBox2_Verz3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Blau", L"Rot", L"Weiss", L"Gruen", L"Pink" });
			this->comboBox2_Verz3->Location = System::Drawing::Point(105, 7);
			this->comboBox2_Verz3->Name = L"comboBox2_Verz3";
			this->comboBox2_Verz3->Size = System::Drawing::Size(56, 21);
			this->comboBox2_Verz3->TabIndex = 5;
			// 
			// radioButton4_Verz3_Nuesse
			// 
			this->radioButton4_Verz3_Nuesse->AutoSize = true;
			this->radioButton4_Verz3_Nuesse->Location = System::Drawing::Point(6, 44);
			this->radioButton4_Verz3_Nuesse->Name = L"radioButton4_Verz3_Nuesse";
			this->radioButton4_Verz3_Nuesse->Size = System::Drawing::Size(61, 17);
			this->radioButton4_Verz3_Nuesse->TabIndex = 2;
			this->radioButton4_Verz3_Nuesse->TabStop = true;
			this->radioButton4_Verz3_Nuesse->Text = L"Nuesse";
			this->radioButton4_Verz3_Nuesse->UseVisualStyleBackColor = true;
			// 
			// radioButton5_Verz3_Streusel
			// 
			this->radioButton5_Verz3_Streusel->AutoSize = true;
			this->radioButton5_Verz3_Streusel->Location = System::Drawing::Point(7, 25);
			this->radioButton5_Verz3_Streusel->Name = L"radioButton5_Verz3_Streusel";
			this->radioButton5_Verz3_Streusel->Size = System::Drawing::Size(63, 17);
			this->radioButton5_Verz3_Streusel->TabIndex = 1;
			this->radioButton5_Verz3_Streusel->TabStop = true;
			this->radioButton5_Verz3_Streusel->Text = L"Streusel";
			this->radioButton5_Verz3_Streusel->UseMnemonic = false;
			this->radioButton5_Verz3_Streusel->UseVisualStyleBackColor = true;
			// 
			// radioButton6_Verz3_Guss
			// 
			this->radioButton6_Verz3_Guss->AutoSize = true;
			this->radioButton6_Verz3_Guss->Location = System::Drawing::Point(7, 6);
			this->radioButton6_Verz3_Guss->Name = L"radioButton6_Verz3_Guss";
			this->radioButton6_Verz3_Guss->Size = System::Drawing::Size(49, 17);
			this->radioButton6_Verz3_Guss->TabIndex = 0;
			this->radioButton6_Verz3_Guss->TabStop = true;
			this->radioButton6_Verz3_Guss->Text = L"Guss";
			this->radioButton6_Verz3_Guss->UseVisualStyleBackColor = true;
			// 
			// groupBox2_Verz2
			// 
			this->groupBox2_Verz2->Controls->Add(this->comboBox1_Verz2);
			this->groupBox2_Verz2->Controls->Add(this->radioButton1_Verz2_Nuesse);
			this->groupBox2_Verz2->Controls->Add(this->radioButton2_Verz2_Streusel);
			this->groupBox2_Verz2->Controls->Add(this->radioButton3_Verz2_Guss);
			this->groupBox2_Verz2->Location = System::Drawing::Point(60, 70);
			this->groupBox2_Verz2->Name = L"groupBox2_Verz2";
			this->groupBox2_Verz2->Size = System::Drawing::Size(167, 62);
			this->groupBox2_Verz2->TabIndex = 11;
			this->groupBox2_Verz2->TabStop = false;
			// 
			// comboBox1_Verz2
			// 
			this->comboBox1_Verz2->BackColor = System::Drawing::Color::LightYellow;
			this->comboBox1_Verz2->FormattingEnabled = true;
			this->comboBox1_Verz2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Blau", L"Rot", L"Weiss", L"Gruen", L"Pink" });
			this->comboBox1_Verz2->Location = System::Drawing::Point(105, 7);
			this->comboBox1_Verz2->Name = L"comboBox1_Verz2";
			this->comboBox1_Verz2->Size = System::Drawing::Size(56, 21);
			this->comboBox1_Verz2->TabIndex = 5;
			// 
			// radioButton1_Verz2_Nuesse
			// 
			this->radioButton1_Verz2_Nuesse->AutoSize = true;
			this->radioButton1_Verz2_Nuesse->Location = System::Drawing::Point(6, 44);
			this->radioButton1_Verz2_Nuesse->Name = L"radioButton1_Verz2_Nuesse";
			this->radioButton1_Verz2_Nuesse->Size = System::Drawing::Size(61, 17);
			this->radioButton1_Verz2_Nuesse->TabIndex = 2;
			this->radioButton1_Verz2_Nuesse->TabStop = true;
			this->radioButton1_Verz2_Nuesse->Text = L"Nuesse";
			this->radioButton1_Verz2_Nuesse->UseVisualStyleBackColor = true;
			// 
			// radioButton2_Verz2_Streusel
			// 
			this->radioButton2_Verz2_Streusel->AutoSize = true;
			this->radioButton2_Verz2_Streusel->Location = System::Drawing::Point(7, 25);
			this->radioButton2_Verz2_Streusel->Name = L"radioButton2_Verz2_Streusel";
			this->radioButton2_Verz2_Streusel->Size = System::Drawing::Size(63, 17);
			this->radioButton2_Verz2_Streusel->TabIndex = 1;
			this->radioButton2_Verz2_Streusel->TabStop = true;
			this->radioButton2_Verz2_Streusel->Text = L"Streusel";
			this->radioButton2_Verz2_Streusel->UseMnemonic = false;
			this->radioButton2_Verz2_Streusel->UseVisualStyleBackColor = true;
			// 
			// radioButton3_Verz2_Guss
			// 
			this->radioButton3_Verz2_Guss->AutoSize = true;
			this->radioButton3_Verz2_Guss->Location = System::Drawing::Point(7, 6);
			this->radioButton3_Verz2_Guss->Name = L"radioButton3_Verz2_Guss";
			this->radioButton3_Verz2_Guss->Size = System::Drawing::Size(49, 17);
			this->radioButton3_Verz2_Guss->TabIndex = 0;
			this->radioButton3_Verz2_Guss->TabStop = true;
			this->radioButton3_Verz2_Guss->Text = L"Guss";
			this->radioButton3_Verz2_Guss->UseVisualStyleBackColor = true;
			// 
			// groupBox2_Verz_1
			// 
			this->groupBox2_Verz_1->Controls->Add(this->comboBox3_Verz1);
			this->groupBox2_Verz_1->Controls->Add(this->radioButton3_Verz1_Nuesse);
			this->groupBox2_Verz_1->Controls->Add(this->radioButton2_Verz1_Streusel);
			this->groupBox2_Verz_1->Controls->Add(this->radioButton1_Verz1_Guss);
			this->groupBox2_Verz_1->Location = System::Drawing::Point(60, 133);
			this->groupBox2_Verz_1->Name = L"groupBox2_Verz_1";
			this->groupBox2_Verz_1->Size = System::Drawing::Size(167, 62);
			this->groupBox2_Verz_1->TabIndex = 10;
			this->groupBox2_Verz_1->TabStop = false;
			// 
			// comboBox3_Verz1
			// 
			this->comboBox3_Verz1->BackColor = System::Drawing::Color::LightYellow;
			this->comboBox3_Verz1->DisplayMember = L"Weiss";
			this->comboBox3_Verz1->FormattingEnabled = true;
			this->comboBox3_Verz1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Blau", L"Rot", L"Weiss", L"Gruen", L"Pink" });
			this->comboBox3_Verz1->Location = System::Drawing::Point(105, 7);
			this->comboBox3_Verz1->Name = L"comboBox3_Verz1";
			this->comboBox3_Verz1->Size = System::Drawing::Size(56, 21);
			this->comboBox3_Verz1->TabIndex = 5;
			this->comboBox3_Verz1->ValueMember = L"Weiss";
			// 
			// radioButton3_Verz1_Nuesse
			// 
			this->radioButton3_Verz1_Nuesse->AutoSize = true;
			this->radioButton3_Verz1_Nuesse->Location = System::Drawing::Point(6, 44);
			this->radioButton3_Verz1_Nuesse->Name = L"radioButton3_Verz1_Nuesse";
			this->radioButton3_Verz1_Nuesse->Size = System::Drawing::Size(61, 17);
			this->radioButton3_Verz1_Nuesse->TabIndex = 2;
			this->radioButton3_Verz1_Nuesse->TabStop = true;
			this->radioButton3_Verz1_Nuesse->Text = L"Nuesse";
			this->radioButton3_Verz1_Nuesse->UseVisualStyleBackColor = true;
			// 
			// radioButton2_Verz1_Streusel
			// 
			this->radioButton2_Verz1_Streusel->AutoSize = true;
			this->radioButton2_Verz1_Streusel->Location = System::Drawing::Point(7, 25);
			this->radioButton2_Verz1_Streusel->Name = L"radioButton2_Verz1_Streusel";
			this->radioButton2_Verz1_Streusel->Size = System::Drawing::Size(63, 17);
			this->radioButton2_Verz1_Streusel->TabIndex = 1;
			this->radioButton2_Verz1_Streusel->TabStop = true;
			this->radioButton2_Verz1_Streusel->Text = L"Streusel";
			this->radioButton2_Verz1_Streusel->UseMnemonic = false;
			this->radioButton2_Verz1_Streusel->UseVisualStyleBackColor = true;
			// 
			// radioButton1_Verz1_Guss
			// 
			this->radioButton1_Verz1_Guss->AutoSize = true;
			this->radioButton1_Verz1_Guss->Location = System::Drawing::Point(7, 6);
			this->radioButton1_Verz1_Guss->Name = L"radioButton1_Verz1_Guss";
			this->radioButton1_Verz1_Guss->Size = System::Drawing::Size(49, 17);
			this->radioButton1_Verz1_Guss->TabIndex = 0;
			this->radioButton1_Verz1_Guss->TabStop = true;
			this->radioButton1_Verz1_Guss->Text = L"Guss";
			this->radioButton1_Verz1_Guss->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(50, 207);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(120, 19);
			this->label12->TabIndex = 9;
			this->label12->Text = L"PLaetzchen (Cookie)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Verz. 3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Verz. 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Verz. 1";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::LightYellow;
			this->textBox5->Location = System::Drawing::Point(19, 422);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(675, 20);
			this->textBox5->TabIndex = 11;
			// 
			// button1_konfig_schreiben
			// 
			this->button1_konfig_schreiben->Location = System::Drawing::Point(290, 533);
			this->button1_konfig_schreiben->Name = L"button1_konfig_schreiben";
			this->button1_konfig_schreiben->Size = System::Drawing::Size(133, 23);
			this->button1_konfig_schreiben->TabIndex = 12;
			this->button1_konfig_schreiben->Text = L"Konfiguration erstellen";
			this->button1_konfig_schreiben->UseVisualStyleBackColor = true;
			this->button1_konfig_schreiben->Click += gcnew System::EventHandler(this, &MyForm::button1_konfig_schreiben_Click);
			// 
			// button1_Exit
			// 
			this->button1_Exit->BackColor = System::Drawing::Color::Crimson;
			this->button1_Exit->ForeColor = System::Drawing::Color::Yellow;
			this->button1_Exit->Location = System::Drawing::Point(590, 524);
			this->button1_Exit->Name = L"button1_Exit";
			this->button1_Exit->Size = System::Drawing::Size(41, 32);
			this->button1_Exit->TabIndex = 13;
			this->button1_Exit->Text = L"Exit";
			this->button1_Exit->UseVisualStyleBackColor = false;
			this->button1_Exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(733, 615);
			this->Controls->Add(this->button1_Exit);
			this->Controls->Add(this->button1_konfig_schreiben);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->groupBox2_Verzierung);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox1_form_teig);
			this->Controls->Add(this->button1_vorschau);
			this->Controls->Add(this->label1_anz_blae);
			this->Controls->Add(this->textBox1_anz_blaetz);
			this->Name = L"MyForm";
			this->Text = L"Konfigurator Backstrasse Plaetzchen";
			this->groupBox1_form_teig->ResumeLayout(false);
			this->groupBox1_form_teig->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2_Verzierung->ResumeLayout(false);
			this->groupBox2_Verzierung->PerformLayout();
			this->groupBox3_Verz3->ResumeLayout(false);
			this->groupBox3_Verz3->PerformLayout();
			this->groupBox2_Verz2->ResumeLayout(false);
			this->groupBox2_Verz2->PerformLayout();
			this->groupBox2_Verz_1->ResumeLayout(false);
			this->groupBox2_Verz_1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_vorschau_Click(System::Object^ sender, System::EventArgs^ e);


	private: System::Void textBox1_anz_blaetz_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox1_sizeX_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox2_sizeY_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Exit_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox3_Backtemp_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox4_Backzeit_Leave(System::Object^ sender, System::EventArgs^ e);
	private: //System::Void groupBox1_form_teig_Leave(System::Object^ sender, System::EventArgs^ e); 


	private: System::Void radioButton1_Stern_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton2_Gringel_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton3_Quadrat_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton4_Kreis_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_konfig_schreiben_Click(System::Object^ sender, System::EventArgs^ e);
	};
}