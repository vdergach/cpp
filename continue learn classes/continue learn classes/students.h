#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>

class Students {
public:
	// ������ ������ � �������� � ����
	void save();
	// ���������� ������ Students
	~Students();

	// ����������� ������ Students
	Students(std::string, std::string);
	// ��������� ����� ��������
	void set_name(std::string);
	// ��������� ����� ��������
	std::string get_name();

	// ��������� ������� ��������
	void set_last_name(std::string);
	// ��������� ������� ��������
	std::string get_last_name();

	// ��������� ������������� ������
	void set_scores(int[]);
	// ��������� ������� � �������������� ��������
	int *get_scores();
	// ��������� ������ � �������������� ��������
	std::string get_scores_str(char);

	// ��������� �������� �����
	void set_average_ball(float);
	// ��������� �������� �����
	float get_average_ball();
private:
	// ������������� ������
	int scores[5];
	// ������� ����
	float average_ball;
	// ���
	std::string name;
	// �������
	std::string last_name;
};