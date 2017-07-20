// sum and multiply via functions.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

double sum(double a, double b)
{
	double sum = a + b;
	return sum;
}

double multiply(double a, double b) 
{
	double multiply = a*b;
	return multiply;
}


int main()
{
	int choice;
	int a = 0;
	int b = 0;

	cout << "Please do a choice" << endl;
	cout << "Please choose 1 for sum of digits" << endl << "Please choose 2 for multiple of digits" << endl;
	cin >> choice;
	
	if (choice == 1)
	{
		cout << "sum is selected" << endl;
		cout << "please insert first value for sum: ";
		cin >> a;
		cout << endl;
		cout << "please insert second value for sum: ";
		cin >> b;
		cout << endl;
		cout << "sum of digits equal: " << sum(a, b) << endl;
	}
	else if (choice == 2)
	{
		cout << "multiply is selected" << endl;
		cout << "please insert first value for sum: ";
		cin >> a;
		cout << endl;
		cout << "please insert second value for sum: ";
		cin >> b;
		cout << endl;
		cout << "multiply of digits equal: " << multiply(a, b) << endl;
	}

    return 0;
}

