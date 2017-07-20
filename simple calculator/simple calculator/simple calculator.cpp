// simple calculator.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Insert first digit: ";
	cin >> a;

	cout << "Insert second digit: ";
	cin >> b;

	int c = a + b;
	cout << "Summ of digits = " << c << endl ;

    return 0;
}