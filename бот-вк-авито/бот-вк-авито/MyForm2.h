
#pragma once
#include "совместимость с вк.cpp"
#include "совместимость с авито.cpp"
#include "Экспорт и импорт.cpp"

namespace InterfaceMyFormTwo {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std;
	string SearchDBVK;
	string SearchDBAvito;
	struct Mnogopotoc {
	public:
		System::Collections::Generic::Stack<Thread^>^ Multizering() {
			InterfaceMyFormTwo::MyForm2^ myform = gcnew MyForm2();
			Thread^ potocSpawnMessageVk = gcnew Thread(gcnew ThreadStart(myform, &MyForm2::vhodVVK));
			System::Collections::Generic::Stack<Thread^>^massThread = nullptr;
			Thread^ potocSpawnMessageAvito = gcnew Thread(gcnew ThreadStart(myform, &MyForm2::vhodVAvito));
			Thread^ potocExportDataVK = gcnew Thread(gcnew ThreadStart(myform, &MyForm2::vhodExportVK));
			Thread^ potocExportDataAvito = gcnew Thread(gcnew ThreadStart(myform, &MyForm2::vhodExportAvito));
			massThread->Push(potocSpawnMessageVk);
			massThread->Push(potocExportDataVK);
			massThread->Push(potocSpawnMessageAvito);
			massThread->Push(potocExportDataAvito);
			return massThread;
		}

		volatile bool working = false;

		Void TriggerMnogopotoc() {
			System::Collections::Generic::Stack<Thread^>^ massThread = Multizering();
			for (;;) {
				for each(Thread ^ MassThread in massThread) {
					MassThread->Start();
					MassThread->CurrentThread->Suspend();
					if (working) { break; }
				}
				if (working) { break; }
			}
		}
	};
	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{

	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		InterfaceMyFormTwo::Mnogopotoc* m = nullptr;
		m->TriggerMnogopotoc();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ Stop;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	public:inline void vhodVVK() {
		WorkingSVK::VK *vk = nullptr;
		vk->vvodZnach();
	}
	public:inline void vhodVAvito() {
		WorkingSAvito::Avito *avito = nullptr;
		avito->vvodZnach();
	}
	public: inline void vhodExportVK() {
		ExportAndImportData::WorkingSVKK * vk = nullptr;
		vk->FinalFunctionExportVK();
	}
	public:inline void vhodExportAvito() {
		ExportAndImportData::WorkingSVKK *avito = nullptr;
		avito->FinalFunctionExportAvito();
	}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->Stop = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(322, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(502, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите поиск по Базе Данных ВК:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(830, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(337, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите поиск по Базе Данных Авито:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(350, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(474, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(830, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Поиск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(8, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Обязательно заполнить хотя бы одно из окон";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 12);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(1878, 59);
			this->progressBar1->TabIndex = 7;
			// 
			// Stop
			// 
			this->Stop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Stop->Location = System::Drawing::Point(965, 147);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(243, 61);
			this->Stop->TabIndex = 8;
			this->Stop->Text = L"Стоп";
			this->Stop->UseVisualStyleBackColor = true;
			this->Stop->Click += gcnew System::EventHandler(this, &MyForm2::Stop_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->Stop);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm2";
			this->Text = L"Bot-VK-Avito";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfaceMyFormTwo::Mnogopotoc* m = nullptr;
		m->working = true;
		String^ SearchDBVK = System::Convert::ToString(this->textBox1);
		InterfaceMyFormTwo::SearchDBVK = msclr::interop::marshal_as<string>(SearchDBVK);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfaceMyFormTwo::Mnogopotoc* m = nullptr;
		m->working = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		InterfaceMyFormTwo::Mnogopotoc* m = nullptr;
		m->working = true;
		String^ SearchDBAvito = System::Convert::ToString(this->textBox2);
		InterfaceMyFormTwo::SearchDBAvito = msclr::interop::marshal_as<string>(SearchDBAvito);
	}
};
}
