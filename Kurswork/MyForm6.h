#pragma once
#include "MyForm7.h"
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
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
		String^ data;
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		MyForm6(String^ data) //Для того чтобы получить номер строки в которой записанны деньги пришлось менять конструктор и передавать строку из MyForm в MyForm2
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(547, 74);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(264, 269);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 25);
			this->textBox2->TabIndex = 16;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::TextBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"На какую сумму хотите пополнить";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"ОнЛайм", L"МГТС", L"Старлинк", L"Акадо", L"Билайн" });
			this->comboBox1->Location = System::Drawing::Point(264, 170);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(254, 25);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::ComboBox1_KeyPress_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(433, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 28);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(264, 221);
			this->textBox1->MaxLength = 7;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 25);
			this->textBox1->TabIndex = 12;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::TextBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Введите ваш лицевой счет";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Выберите своего оператора";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(554, 415);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm6";
			this->Text = L"Оплата интернета";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 59) && e->KeyChar != 8) //запрет на ввод всего кроме чисел
		e->Handled = true;
}
private: System::Void TextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar <= 48 || e->KeyChar >= 59) && e->KeyChar != 8) //запрет на ввод всего кроме чисел
		e->Handled = true;
}
private: System::Void ComboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList; //Запрещаем вводить в combobox собственные значения

}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ fileName = "C:\\Users\\xxxxs\\Desktop\\kursovayarabota-master\\Kurswork\\test.txt"; //Указываем имя файла
	try {
		StreamReader^ bin = File::OpenText(fileName); //Считываем текст из файла
		array<String^>^ mas;
		mas = Regex::Split(bin->ReadToEnd(), "\r\n");
		bin->Close(); //Закрываем прочитанный файл

		if (textBox1->Text == "" && textBox2->Text == "") //Если текст отстутсвует
		{
			MessageBox::Show("Все поля должны быть заполнены", "Error");

		}
		else {
			String^ test1 = textBox2->Text;
			int walk = Convert::ToInt32(test1);
			int woolf = Convert::ToInt32(data); //достает номер строки денежных средств
			String^ oldmoney = mas[woolf];
			int Ioldmoney = Convert::ToInt32(oldmoney);
			if (Ioldmoney < walk) {
				MessageBox::Show("Не хватает средств", "Error");
				textBox2->Clear();

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
				if (textBox1->Text->Length < 7) {
					MessageBox::Show("Лицевой счет состоит из 7 цифр");
				}
				if (comboBox1->SelectedIndex < 0) {
					MessageBox::Show("Выберите провайдера!");
				}
				else {
					String^ oper = comboBox1->SelectedItem->ToString();
					String^ number = textBox1->Text;
					MyForm7^ fr8 = gcnew MyForm7(check, number, oper); //отправляем сумму которую будем менять в форму чека для отображение информации
					fr8->Show(this);
					this->Hide();
				}

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

private: System::Void ComboBox1_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList; //Запрещаем вводить в combobox собственные значения
}
};
}
