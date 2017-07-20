// cycle do while.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int i = 0;
	int sum = 0;
	do {
		i++;
		sum += i;
	} while (i <= 1000);
	cout << "Sumof values from 1 till 1000 are equals = " << sum << endl;

    return 0;
}

