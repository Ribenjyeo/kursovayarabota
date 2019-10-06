#pragma once
#include "Client.h";
using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

ref class Bank
{
private: String^ fileName = "C:\\Users\\xxxxs\\source\\repos\\Ribenjyeo\\kursovayarabota\\Kurswork\\test.txt";
private: const int Length = 20;
public: array<Client^>^ Mysd = gcnew array<Client^>(Length);
public:
	
	Bank() {};
	~Bank() {};
	void WriteToFile() {
		StreamWriter^ sw = gcnew StreamWriter(fileName); //Записываем в файл новую сумму
		for (int i = 0; i < Mysd->Length; ++i) {
			if (Mysd[i] != nullptr) {
				sw->WriteLine(Mysd[i]->login);
				sw->WriteLine(Mysd[i]->password);
				sw->WriteLine(Mysd[i]->money);
			}
		}
		sw->Close();
	}
	
};
