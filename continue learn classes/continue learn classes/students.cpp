#include <string>
#include <fstream>

#include "students.h"

// ���������� Students
Students::~Students()
{
	Students::save();
}

// ������ ������ � �������� � ����
void Students::save()
{
	std::ofstream fout("students.txt", std::ios::app);

	fout << Students::get_name() << " "
		<< Students::get_last_name() << " ";

	for (int i = 0; i < 5; ++i) {
		fout << Students::scores[i] << " ";
	}

	fout << std::endl;
	fout.close();
}

// ����������� Students
Students::Students(std::string name, std::string last_name)
{
	Students::set_name(name);
	Students::set_last_name(last_name);
}
// ��������� ����� ��������
void Students::set_name(std::string student_name)
{
	Students::name = student_name;
}

// ��������� ����� ��������
std::string Students::get_name()
{
	return Students::name;
}

// ��������� ������� ��������
void Students::set_last_name(std::string student_last_name)
{
	Students::last_name = student_last_name;
}

// ��������� ������� ��������
std::string Students::get_last_name()
{
	return Students::last_name;
}

// ��������� ������������� ������
void Students::set_scores(int scores[])
{
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		Students::scores[i] = scores[i];
		sum += scores[i];
	}

}

// ��������� ������� � �������������� ��������
int *Students::get_scores()
{
	return Students::scores;
}

// ��������� �������� �����
void Students::set_average_ball(float ball)
{
	Students::average_ball = ball;
}

// ��������� �������� �����
float Students::get_average_ball()
{
	return Students::average_ball;
}