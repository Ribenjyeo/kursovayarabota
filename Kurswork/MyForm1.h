#pragma once
#include "MyForm2.h"
#include "MyForm4.h"
#include "MyForm6.h"
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
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		String^ pass;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		MyForm1(String^ pass) {
			InitializeComponent();
			this->pass = pass;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(355, 585);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(373, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"-->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(446, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 22);
			this->button3->TabIndex = 3;
			this->button3->Text = L"-->";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::Button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(405, 422);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 22);
			this->button4->TabIndex = 4;
			this->button4->Text = L"-->";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(71, 585);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(258, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Смена пользователя";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::Button5_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1200, 620);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show(); //Скрытие формы и переход к форме авторизации
		this->Hide();
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ fr2 = gcnew MyForm2(this->pass); //переход на другую форму
	fr2->Show(this);


}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm4^ fr5 = gcnew MyForm4(this->pass);
	fr5->Show();

}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm6^ fr7 = gcnew MyForm6(this->pass);
	fr7->Show();
}
};
}
