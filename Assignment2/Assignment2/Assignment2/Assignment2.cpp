// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Michael Gonzalez

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Employee* employees[] =
	{
		new Professional(2200, 10),
		new Nonprofessional(60, 20),
		new Professional(2500, 9),
		new Nonprofessional(70,25)
	};

	for (int i = 0; i < 4; i++) {
		cout << "Pay " << i << ": " << employees[i]->pay() << ", Vacation Days: " << employees[i]->vacation() <<  ", Health Contribution: " << employees[i]->healthCon() << endl;
	}

	return 0;
}

