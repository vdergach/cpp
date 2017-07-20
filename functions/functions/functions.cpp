// functions.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void check_pass(string password) 
{
	string valid_pass = "qwerty";
	if (password == valid_pass)
	{
		cout << "Access granted" << endl;
	}else{
		cout << "Access denied" << endl;
	}
}

int main()
{
	string user_pass;
	cout << "Insert a password: ";
	//cin >> user_pass;
	getline(cin, user_pass);
	check_pass(user_pass);

    return 0;
}

