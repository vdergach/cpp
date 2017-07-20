
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Students {
	
public:

	setlocale(0, "");
	// Установка среднего балла
	void set_average_ball(float ball)
	{
		average_ball = ball;
	}
	// Получение среднего балла
	float get_average_ball()
	{
		return average_ball;
	}
	std::string name;
	std::string last_name;
	int scores[5];

private:
	float average_ball;
};