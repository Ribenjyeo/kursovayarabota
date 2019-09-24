#pragma once
using namespace std;
using namespace System;

ref class Client {
public:
	String^ login;
	String^ password;
	int money;
public:
	Client() {};
	~Client() {
		delete login;
		delete password;
	}
	void AddClient(String^ loginl, String^ passwordl, int moneyl) {
		this->login = loginl;
		this->password = passwordl;
		this->money = moneyl;
	}

};


