#pragma once
#include "MyForm5.h"
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
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
		String^ data;
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

		}
	public:
		MyForm4(String^ data) //Для того чтобы получить номер строки в которой записанны деньги пришлось менять конструктор и передавать строку из MyForm в MyForm2
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
		~MyForm4()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public:

	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Size = System::Drawing::Size(201, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите своего оператора";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(292, 221);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 25);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm4::TextBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm4::TextBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::TextBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите ваш номер телефона";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(433, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::Button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Теле2", L"Билайн", L"МТС", L"Yota", L"Мегафон" });
			this->comboBox1->Location = System::Drawing::Point(264, 170);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(254, 25);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::ComboBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(264, 269);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 25);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::TextBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"На какую сумму хотите пополнить";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(261, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"+7";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(554, 415);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm4";
			this->Text = L"Оплата сотовой связи";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


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


	String^ fileName = "C:\\Users\\xxxxx\\Desktop\\Kursworkout\\Kurswork\\Kurswork\\test.txt"; //Указываем имя файла
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
				if (textBox1->Text->Length < 10) {
					MessageBox::Show("Телефон состоит из 10 цифр");
				}
				if (comboBox1->SelectedIndex < 0) {
					MessageBox::Show("Выберите оператора!");
				}
				else {
					String^ oper = comboBox1->SelectedItem->ToString();
					String^ number = textBox1->Text;
					MyForm5^ fr6 = gcnew MyForm5(check, number, oper); //отправляем сумму которую будем менять в форму чека для отображение информации
					fr6->Show(this);
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
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
}
};
}
