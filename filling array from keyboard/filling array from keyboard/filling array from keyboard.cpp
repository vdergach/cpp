// filling array from keyboard.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");

	int arr[3];
	for (size_t i = 0; i < 3; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}

	cout << "your array: ";

	for (size_t i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}

