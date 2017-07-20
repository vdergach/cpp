// inheritance of classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

#include "human.h"
#include "student.h"

using namespace std;

int main(int argc, char* argv[])
{
    
	vector<int> scores;
	
	for (size_t i = 0; i < 20; i++)
	{
		scores.push_back[i];
	}

	student *stud = new student("Иванов", "Иван", "Иванович", scores);

	
	return 0;
}

