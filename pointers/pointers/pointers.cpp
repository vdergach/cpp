// pointers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int *a = new int;
	int *b = new int(5);

	*a = 10;
	*b = *a + *b;
	cout << "b is " << *b << endl;
	cout << "b address is " << &b << endl;

	delete a;
	delete b;

    return 0;
}

