// arrays.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string students[10] = {
		"������", "������", "�������",
		"�������", "�������", "�����",
		"������", "��� ������", "���������", "������"
	};

	//cout << "arrays of students" << students << endl;

	//cout << students[0] << endl;
	for (int i = 0; i < students->length; i++)
	{
		cout << "Student id"<< i << " " << students[i] << endl;
	}

    return 0;
}

