
#pragma once

namespace Interface {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Переменные для работы с вводами
	string localhostLogin;
	string localhostPass;
	string ClientLoginVK;
	string ClientPassVK;
	string ClientLoginAvito;
	string ClientPassAvito;
	string ClientText;
	string VKToken;
	string AvitoToken;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private:

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	public:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1902, 24);
			this->menuStrip1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин localhost3306:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль от localhost3306:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Логин-телефон от VK:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Пароль от VK:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Логин от Avito:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 308);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Пароль от Avito:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Введите текст спама: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 22);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(230, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 22);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(230, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(264, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(230, 207);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(230, 258);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 22);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(230, 305);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 22);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(230, 347);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(643, 136);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(230, 528);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 36);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(515, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(478, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"(Не обязательно если заполнено поле с данными Avito)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(519, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(463, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"(Не обязательно если заполнено поле с данными VK)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1035, 162);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(194, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Введите токен от VK:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1245, 160);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(275, 22);
			this->textBox8->TabIndex = 22;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1035, 261);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(209, 20);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Введите токен от Avito:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1245, 261);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(275, 22);
			this->textBox9->TabIndex = 25;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bot-VK-Avito";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ localhostLogin = Convert::ToString(textBox1->Text);
		if (localhostLogin != nullptr) {
			Interface::localhostLogin = msclr::interop::marshal_as<string>(localhostLogin);
		}
		String^ localhostPassword = Convert::ToString(textBox2->Text);
		if (localhostPassword != nullptr) {
			Interface::localhostPass = msclr::interop::marshal_as<string>(localhostPassword);
		}
		String^ ClientLoginVK = Convert::ToString(textBox3->Text);
		if (ClientLoginVK != nullptr) {
			Interface::ClientLoginVK = msclr::interop::marshal_as<string>(ClientLoginVK);
		}
		String^ ClientPasswordVK = Convert::ToString(textBox4->Text);
		if (ClientPasswordVK != nullptr) {
			Interface::ClientPassVK = msclr::interop::marshal_as<string>(ClientPasswordVK);
		}
		String^ ClientLoginAvito = Convert::ToString(textBox5->Text);
		if (ClientLoginAvito != nullptr) {
			Interface::ClientLoginAvito = msclr::interop::marshal_as<string>(ClientLoginAvito);
		}
		String^ ClientPassworAvito = Convert::ToString(textBox6->Text);
		if (ClientPassworAvito != nullptr) {
			Interface::ClientPassAvito = msclr::interop::marshal_as<string>(ClientPassworAvito);
		}
		String^ ClientText = Convert::ToString(textBox7->Text);
		if (ClientText != nullptr) {
			Interface::ClientText = msclr::interop::marshal_as<string>(ClientText);
		}
		String^ VKToken = Convert::ToString(textBox8->Text);
		if (VKToken != nullptr) {
			Interface::VKToken = msclr::interop::marshal_as<string>(VKToken);
		}
		String^ AvitoToken = Convert::ToString(textBox9->Text);
		if (AvitoToken != nullptr) {
			Interface::AvitoToken = msclr::interop::marshal_as<string>(AvitoToken);
		}
		MyForm^ f1 = gcnew MyForm();
		f1->Show();
		f1->~MyForm();
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}