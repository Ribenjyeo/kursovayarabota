#pragma once
#include "MyForm3.h"
namespace Kurswork {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		String^ data;
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		MyForm2(String^ data) //Для того чтобы получить номер строки в которой записанны деньги пришлось менять конструктор и передавать строку из MyForm в MyForm2
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->data = data;
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-29, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(547, 74);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Какую сумму вы хотите снять";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(264, 167);
			this->textBox1->MaxLength = 8;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::TextBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::TextBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(433, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::Button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(21, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(491, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Банкомат может выдать купюры только номиналом: 10, 50, 100, 500, 1000, 5000";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(554, 415);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->Text = L"Снятие наличных";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		

	}
	public: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "C:\\Users\\xxxxs\\Desktop\\kursovayarabota-master\\Kurswork\\test.txt"; //Указываем имя файла
		try {
			StreamReader^ bin = File::OpenText(fileName); //Считываем текст из файла
			array<String^>^ mas;
			mas = Regex::Split(bin->ReadToEnd(), "\r\n");
			bin->Close(); //Закрываем прочитанный файл

			if (textBox1->Text == "") //Если текст отстутсвует
			{
				MessageBox::Show("Введите сумму снятия", "Error");
				textBox1->Focus();
			}
			else { 
				String^ test1 = textBox1->Text;
				int walk = Convert::ToInt32(test1);
				int woolf = Convert::ToInt32(data); //достает номер строки денежных средств
				String^ oldmoney = mas[woolf];
				int Ioldmoney = Convert::ToInt32(oldmoney);
				if (Ioldmoney < walk) {
					MessageBox::Show("Не хватает средств", "Error");
					textBox1->Clear();
					textBox1->Focus();
				}
				else {
					String^ strmoney = Ioldmoney.ToString();
					String^ check = walk.ToString();
					int newmoney = Ioldmoney - walk;
					String^ Snewmoney = newmoney.ToString();

					StreamWriter^ sw = gcnew StreamWriter(fileName); //Записываем в файл новую сумму
					for (int i = 0; i < mas->Length; i++)
					{
						if (mas[i]->Contains(mas[woolf]))
						{
							mas[i] = mas[i]->Replace(oldmoney, Snewmoney);
						}
						sw->WriteLine(mas[i]);
					}
					sw->Close(); //Закрываем файл

					MyForm3^ fr4 = gcnew MyForm3(check); //отправляем сумму которую будем менять в форму чека для отображение информации
					fr4->Show(this);
					this->Hide();

					textBox1->Clear(); //Очищаем текстбокс
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
	private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { //Запрет на все кроме цифр
		if ((e->KeyChar <= 48 || e->KeyChar >= 59) && e->KeyChar != 8)
			e->Handled = true;
	}
};
}
