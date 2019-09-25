#pragma once
using namespace std;
using namespace System;

public ref class Client {
public:
	String^ login = nullptr;
	String^ password = nullptr;
	int money;
public:
	Client(String^ loginl, String^ passwordl, int moneyl) {
		this->login = loginl;
		loginl = gcnew String("");
		this->password = passwordl;
		passwordl = gcnew String("");
		this->money = moneyl;
	};
	~Client() {};

};
