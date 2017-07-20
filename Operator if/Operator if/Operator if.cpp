// Operator if.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	double num;

	cout << "Insert random digit: ";
	cin >> num;

	if (num < 10)
	{
		cout << "This digit lowest than 10" << endl;
	}
	else if (num == 10)
	{
		cout << "This value equal 10" << endl;
	}
	else{
		cout << "This digit more than 10" << endl;
	}

    return 0;
}

