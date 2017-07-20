// cycle for.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i <= 1000; i++)
	{
		sum = sum + i;
	}
	cout << "Sum of digits from 1 till 1000 - " << sum << endl;


    return 0;
}

