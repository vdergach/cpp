// dynamic arrays.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;




int main()
{

	int num;
	cout << "insert quantity of array: ";
	cin >> num;
	cout << endl;

	int *array = new int[num];

	for (int i = 0; i < num; i++){
		array[i] = i;
		cout << "Value of  " << i << " element is " << array[i] << endl;
	}
	delete[]array;
    return 0;
}

