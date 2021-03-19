#pragma once

#include "DialogCreateBank.h"


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		Town* town = new Town();
		MyForm(void)
		{
			InitializeComponent();


			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(24, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(270, 466);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Банки";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::LightPink;
			this->label10->Location = System::Drawing::Point(24, 288);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::AliceBlue;
			this->groupBox7->Controls->Add(this->textBox6);
			this->groupBox7->Controls->Add(this->button4);
			this->groupBox7->Controls->Add(this->label9);
			this->groupBox7->Controls->Add(this->checkBox1);
			this->groupBox7->Location = System::Drawing::Point(20, 319);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(228, 116);
			this->groupBox7->TabIndex = 14;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Создать клиента";
			this->groupBox7->Enter += gcnew System::EventHandler(this, &MyForm::groupBox7_Enter);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(62, 38);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Honeydew;
			this->button4->Location = System::Drawing::Point(13, 77);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 24);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Добавить клиента в выбранный банк";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 45);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Имя: ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(71, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Юр. лицо";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightPink;
			this->button3->Location = System::Drawing::Point(135, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 25);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Удалить банк";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Honeydew;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(19, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 24);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Создать банк";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::AliceBlue;
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Location = System::Drawing::Point(18, 207);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(230, 69);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(117, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::AliceBlue;
			this->label5->Location = System::Drawing::Point(6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Информация о банке";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::AliceBlue;
			this->label6->Location = System::Drawing::Point(6, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Денег на счёте";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(18, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(230, 147);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Location = System::Drawing::Point(317, 48);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(270, 378);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Клиенты банка";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightPink;
			this->button5->Location = System::Drawing::Point(21, 172);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(230, 25);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Удалить выбранного клиента";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(21, 19);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(230, 147);
			this->listBox2->TabIndex = 3;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::AliceBlue;
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Location = System::Drawing::Point(21, 233);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(230, 90);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(120, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Информация о клиенте";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->Location = System::Drawing::Point(6, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Тип клиента";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label4->Location = System::Drawing::Point(6, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Денег на счёте";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(120, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Операции";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->button1);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->Controls->Add(this->listBox3);
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Location = System::Drawing::Point(613, 48);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(270, 378);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LightPink;
			this->label11->Location = System::Drawing::Point(25, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Honeydew;
			this->button1->Location = System::Drawing::Point(168, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Сумма";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(19, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(19, 19);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(230, 69);
			this->listBox3->TabIndex = 10;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBox5);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->listBox4);
			this->groupBox6->Location = System::Drawing::Point(19, 176);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(230, 147);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Кому";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(80, 102);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(144, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Комиссия: ";
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(6, 20);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(217, 69);
			this->listBox4->TabIndex = 14;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox4_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 561);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		DialogCreateBank^ dialog = gcnew DialogCreateBank(town, listBox1);
		dialog->Owner = this;
		dialog->Show();

	}
	private:  void  updateBankSelectedItem() {
		System::String^ str = listBox1->GetItemText(listBox1->SelectedItem);
		std::string info = marshal_as<std::string>(str);

		if (!info.empty()) {
			Bank* currBank = town->getBankByBankInfo(info);
			if (currBank != NULL) {
				textBox1->Text = currBank->getBankBill().ToString();
			}
		}
		else {
			textBox1->Text = "";
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		updateClientsBox();
		updateBankSelectedItem();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ str = listBox1->GetItemText(listBox1->SelectedItem);
		std::string info = marshal_as<std::string>(str);
		if (!info.empty()) {
			Bank* bank = town->getBankByBankInfo(info);
			town->deleteBank(bank->getId());
			listBox1->Items->RemoveAt(listBox1->SelectedIndex);
		}


	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (listBox1->SelectedIndex != -1) {
			label10->Visible = false;
			System::String^ name = this->textBox6->Text->ToString();
			char* nameUser = _strdup(marshal_as<std::string>(name).c_str());
			try {
				Client* c = new Client(nameUser);
				if (checkBox1->Checked) {
					c->setBill(new LawBill());
				}
				else {
					c->setBill(new BaseBill());
				}


				System::String^ str = listBox1->GetItemText(listBox1->SelectedItem);
				std::string info = marshal_as<std::string>(str);
				Bank* bank = town->getBankByBankInfo(info);
				bank->addClient(c);

				updateClientsBox();
			}
			catch (System::ArgumentException^ e) {

				label10->Text = e->Message;
				label10->Visible = true;
			}
		}
		else {
			label10->Text = "Банк не выбран";
			label10->Visible = true;
		}





	}
	private:  void  updateClientsBox() {
		listBox2->Items->Clear();
		System::String^ str = listBox1->GetItemText(listBox1->SelectedItem);
		std::string info = marshal_as<std::string>(str);
		if (!info.empty()) {
			Bank* bank = town->getBankByBankInfo(info);

			Client** clients = bank->getClients();
			for (int i = 0; i < bank->getLengthArr(); i++) {
				std::string userInfo = clients[i]->getClientInfo();
				listBox2->Items->Add(gcnew System::String(userInfo.c_str()));
			}
		}

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private:  void  updateClientOperations() {
		listBox3->Items->Add("Перевод");
		listBox3->Items->Add("Снять деньги");
		listBox3->Items->Add("Положить");
	}
	private:  void  updateClientIndormatiom() {
		System::String^ str = listBox2->GetItemText(listBox2->SelectedItem);
		std::string info = marshal_as<std::string>(str);
		int idUser = town->getClientIdByUserInfo(info);

		System::String^ str1 = listBox1->GetItemText(listBox1->SelectedItem);
		std::string infobank = marshal_as<std::string>(str1);
		Bank* bank = town->getBankByBankInfo(infobank);
		Client* client = bank->getClientById(idUser);

		double currBill = client->getBill()->getBill();
		BaseBill* bill = dynamic_cast<LawBill*>(client->getBill());

		textBox3->Text = currBill.ToString();
		if (bill) {
			textBox2->Text = "Юр. лицо";
		}
		else {
			textBox2->Text = "Физ. лицо";
		}
		if (listBox3->Items->Count == 0) {
			updateClientOperations();
		}
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (listBox2->SelectedIndex != -1 && listBox1->SelectedIndex != -1) {
			updateClientIndormatiom();


		}
	}


	private: System::Void groupBox7_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (listBox2->SelectedIndex != -1) {
			System::String^ str = listBox2->GetItemText(listBox2->SelectedItem);
			std::string info = marshal_as<std::string>(str);
			int idUser = town->getClientIdByUserInfo(info);
			System::String^ str1 = listBox1->GetItemText(listBox1->SelectedItem);
			std::string infobank = marshal_as<std::string>(str1);
			Bank* bank = town->getBankByBankInfo(infobank);
			bank->deleteClient(idUser);
			textBox3->Text = "";
			textBox2->Text = "";
			updateClientsBox();
			listBox3->Items->Clear();
		}
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		listBox4->Items->Clear();
		if (listBox3->SelectedIndex != -1) {
			System::String^ strNameOperation = listBox3->GetItemText(listBox3->SelectedItem);
			std::string nameOperation = marshal_as<std::string>(strNameOperation);

			if (nameOperation._Equal("Перевод")) {
				Bank** banks = town->getBanks();
				for (int i = 0; i < town->getLength(); i++) {
					Client** clients = banks[i]->getClients();
					int length = banks[i]->getLengthArr();
					for (int i = 0; i < length; i++) {
						std::string userInfo = clients[i]->getClientInfo();
						listBox4->Items->Add(gcnew System::String(userInfo.c_str()));
					}
				}


			}
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox3->SelectedIndex != -1 && listBox2->SelectedIndex != -1 && listBox1->SelectedIndex != -1) {
			try {

				label11->Visible = false;

				System::String^ sumString = this->textBox4->Text->ToString();
				double sum = System::Convert::ToDouble(sumString);

				System::String^ str = listBox2->GetItemText(listBox2->SelectedItem);
				std::string info = marshal_as<std::string>(str);
				int idUser = town->getClientIdByUserInfo(info);

				System::String^ str1 = listBox1->GetItemText(listBox1->SelectedItem);
				std::string infobank = marshal_as<std::string>(str1);
				Bank* bank = town->getBankByBankInfo(infobank);
				Client* client = bank->getClientById(idUser);

				System::String^ strNameOperation = listBox3->GetItemText(listBox3->SelectedItem);
				std::string nameOperation = marshal_as<std::string>(strNameOperation);

				if (nameOperation._Equal("Снять деньги")) {
					client->getBill()->takeMoney(sum);
				}
				else if (nameOperation._Equal("Положить")) {
					client->getBill()->putMoney(sum);
				}
				else {
					if (listBox4->SelectedIndex != -1) {
					 
						System::String^ anotherUser = listBox4->GetItemText(listBox4->SelectedItem);
						std::string anotherUserStr = marshal_as<std::string>(anotherUser);
						int idAnotherUser = town->getClientIdByUserInfo(anotherUserStr);
						int anotherIdBank = town->getBankIdByUserInfo(anotherUserStr);
						Bank* anBank = town->getBankById(anotherIdBank);
						Client* anotherClient = anBank->getClientById(idAnotherUser);
						client->getBill()->transferMoney(sum, anotherClient->getBill());
						updateBankSelectedItem();
					}
				}
				updateClientIndormatiom();
			}
			catch (System::ArgumentException^ e) {
				label11->Text = e->Message;
				label11->Visible = true;
			}
			catch (System::Exception^ e) {

				label11->Text = e->Message;
				label11->Visible = true;

			}
		}

		else {
			label11->Text = "Проверьте выбор банка-клиента-операции";
			label11->Visible = true;
		}

	}
	private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	};
}
