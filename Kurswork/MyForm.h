#pragma once
#include "MyForm1.h"
namespace Kurswork {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::GhostWhite;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(779, 274);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->MaxLength = 16;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 19);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(779, 362);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->MaxLength = 28;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(350, 19);
			this->textBox2->TabIndex = 3;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(729, 466);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 38);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(984, 466);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 38);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1200, 620);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signin";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "C:\\Users\\xxxxs\\Desktop\\kursovayarabota-master\\Kurswork\\test.txt"; //Указываем имя файла
		try {
			StreamReader^ din = File::OpenText(fileName); //Считываем текст из файла
			array<String^>^ mas;
			mas = Regex::Split(din->ReadToEnd(), "\r\n");
			din->Close(); //Закрываем прочитанный файл
			
			int a = 0;
			int b = 1;

			for (int i = 0; i < mas->Length; i++) {
				if (mas[a] == textBox1->Text && mas[b] == textBox2->Text) //Сравнием строки логина и пароля с значением в файле если  все правильно переходит на другой фрейм
				{
					int g = b + 1;
					String^ money = g.ToString();
					MyForm1^ fr1 = gcnew MyForm1(money);
					fr1->Show(this);
					this->Hide();
					textBox1->Clear();
					textBox2->Clear();
					din->Close();
					break;
				}
				a += 3;//В файле строкя хранятся как -> Логин, Пароль, Сумма. Перескакиваем через сумму этим образом
				b += 3;
				if (a && b > 100) //Если мы ничего не нашли то выводим ошибку и делаем фокус на textbox1
				{
					MessageBox::Show("Вы ввели не правильный логин или пароль", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox1->Clear();
					textBox2->Clear();
					textBox1->Focus();	
					break;
				}
			}
		}
		catch (Exception^ e) //Ловим исключение: Файл не найден и проблемы с чтением файла
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				MessageBox::Show("file '{0}' not found", fileName);
			else
				MessageBox::Show("problem reading file '{0}'", fileName);
		}
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	
	






	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
