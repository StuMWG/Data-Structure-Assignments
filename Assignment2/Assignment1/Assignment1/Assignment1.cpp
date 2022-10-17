// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Michael Gonzalez

#include <iostream>
#include <fstream>
#include "Header.h"

using namespace std;


int main()
{
	int SIZE = 100;
	string func;

	//Takes values from the dataIn file and moves them into an array
	int* arrayIn = new int[SIZE];
	ifstream ifs("dataIn.txt");
	if (ifs.is_open()) {
		for (int i = 0; i < SIZE; i++) {
			ifs >> arrayIn[i];
		}
		ifs.close();
	}

	//inital input
	cout << "What function would you like to run? Type 'exit' to close \n";
	cin >> func;

	// determins which function to execute, and loops until user types exit
	while (func != "exit") {
		int valueIn = 0;
		int modValue = 0;
		if (func == "search") {
			cout << "\nInput value search: ";
			cin >> valueIn;
			cout << intCheck(valueIn, arrayIn, SIZE);
			func = "";
		}
		if (func == "mod") {
			cout << "\nIndex and new value: ";
			cin >> valueIn >> modValue;
			try {// test if the user input is within the index range and a number
				if (!cin) {
					cin.clear();
					cin.ignore(100, '\n');
					throw(SIZE);
				}
				if (valueIn >= SIZE || valueIn < 0) {
					throw(SIZE);
				}
				else {
					setValue(valueIn, arrayIn, modValue, SIZE);
				}
			}
			catch (int range) {
				cout << "Index is out of bounds or input value is not a number\n";
				cout << "Index must be between the 0-" << SIZE-1 << " and input must be a number";
			}
			func = "";
		}
		if (func == "add") {
			cout << "\nValue to add: ";
			cin >> valueIn;
			try {//tests if the user input is a number
				if (!cin) {
					cin.clear();
					cin.ignore(100, '\n');
					string msg = "Invalid input";
					throw(msg);
				}
				else {
					SIZE++;
					arrayIn = addValue(valueIn, arrayIn, SIZE);
				}
			}
			catch (string msg) {
				cout << msg;
			}
			func = "";
		}
		if (func == "remove") {
			cout << "\nIndex to remove: ";
			cin >> valueIn;
			arrayIn = removeValue(valueIn, arrayIn, SIZE);
			SIZE--;
			func = "";
		}
		cout << "\nWhat function would you like to run? Type 'exit' to close \n";
		cin >> func;
	}

	//displays the array upon exit
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrayIn[i] << " ";
	}
}