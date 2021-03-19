#pragma

#include <msclr\marshal_cppstd.h>
#include "Town.h"
 

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class DialogCreateBank : public System::Windows::Forms::Form
	{
	public:


		DialogCreateBank(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		DialogCreateBank(Town* town, ListBox^ listBox1)
		{
			this->town = town;
			this->listBox1 = listBox1;
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		Town* town;
		ListBox^ listBox1;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DialogCreateBank()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nameBanktextBox;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ comissionBankTextBox;
	private: System::Windows::Forms::Label^ errorLabel;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->errorLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comissionBankTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameBanktextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->errorLabel);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comissionBankTextBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->nameBanktextBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(19, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(331, 262);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DialogCreateBank::groupBox1_Enter);
			// 
			// errorLabel
			// 
			this->errorLabel->AutoSize = true;
			this->errorLabel->BackColor = System::Drawing::Color::Pink;
			this->errorLabel->Location = System::Drawing::Point(18, 148);
			this->errorLabel->Name = L"errorLabel";
			this->errorLabel->Size = System::Drawing::Size(110, 13);
			this->errorLabel->TabIndex = 5;
			this->errorLabel->Text = L"Ошибочные данные!";
			this->errorLabel->Visible = false;
			this->errorLabel->Click += gcnew System::EventHandler(this, &DialogCreateBank::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Menu;
			this->button1->Location = System::Drawing::Point(76, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Создать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DialogCreateBank::button1_Click);
			// 
			// comissionBankTextBox
			// 
			this->comissionBankTextBox->Location = System::Drawing::Point(131, 97);
			this->comissionBankTextBox->Name = L"comissionBankTextBox";
			this->comissionBankTextBox->Size = System::Drawing::Size(100, 20);
			this->comissionBankTextBox->TabIndex = 3;
			this->comissionBankTextBox->TextChanged += gcnew System::EventHandler(this, &DialogCreateBank::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Комиссия:";
			this->label2->Click += gcnew System::EventHandler(this, &DialogCreateBank::label2_Click);
			// 
			// nameBanktextBox
			// 
			this->nameBanktextBox->Location = System::Drawing::Point(131, 33);
			this->nameBanktextBox->Name = L"nameBanktextBox";
			this->nameBanktextBox->Size = System::Drawing::Size(100, 20);
			this->nameBanktextBox->TabIndex = 1;
			this->nameBanktextBox->TextChanged += gcnew System::EventHandler(this, &DialogCreateBank::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название банка: ";
			this->label1->Click += gcnew System::EventHandler(this, &DialogCreateBank::label1_Click);
			// 
			// DialogCreateBank
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 308);
			this->Controls->Add(this->groupBox1);
			this->Name = L"DialogCreateBank";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &DialogCreateBank::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = this->nameBanktextBox->Text->ToString();
		System::String^ comission = this->comissionBankTextBox->Text->ToString();
		try {
			
			double comPerCent = System::Convert::ToDouble(comission);
			char* nameBank = _strdup(marshal_as<std::string>(name).c_str());
			Bank * exBank = this->town->addBank(new Bank(nameBank, comPerCent));
			listBox1->Items->Add(gcnew System::String(exBank->getBankInfo().c_str()));
			errorLabel->Visible = false;
			this->Close();
		}

		catch (System::ArgumentException^ e) {

			errorLabel->Text = e->Message;
			errorLabel->Visible = true;

		}
		catch (System::Exception^ e) {

			errorLabel->Text = e->Message;
			errorLabel->Visible = true;

		}



	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
