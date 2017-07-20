// functions boolean.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool password_is_valid(string password)
{
	string valid_pass = "qwerty";
	if (valid_pass == password)
	{
		return true;
	}
	else {
		return false;
	}
}

void get_pass()
{
	string user_pass;
	cout << "Insert a password: ";
	getline(cin, user_pass);

		if (!password_is_valid(user_pass)) {
		cout << "Wrong Password!" << endl;
		get_pass(); // Здесь делаем рекурсию
	}
	else {
		cout << "Access Granted." << endl;
	}

}
int main()
{
	setlocale(0, "");
    get_pass();
	return 0;
}

