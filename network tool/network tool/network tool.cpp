#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void commandPing()
{
	string commandPing = "ping";
	string argumentPing;
	cout << "Insert FQDN or IP to ping" << endl;
	cin >> argumentPing;
	commandPing.append(" ");
	commandPing.append(argumentPing);
	system(commandPing.c_str());
}

void commandTelnet()
{
	string commandTelnet = "telnet";
	string argumentTelnet;
	cout << "Insert FQDN or IP to check port availability" << endl;
	cin >> argumentTelnet;
	commandTelnet.append(" ");
	commandTelnet.append(argumentTelnet);
	system(commandTelnet.c_str());
}

void wizard()
{
	cout << "Choose an operation" << endl;
	cout << "1 = Ping" << endl;
	cout << "2 = Telnet" << endl;

	int userInput = 0;

	cin >> userInput;
	if (userInput == 1) {
		commandPing();
	}
	else if (userInput == 2) {
		commandTelnet();
	}
}

int main()
{
	wizard();
	return 0;
}

