// assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Michael Gonzalez

#include <iostream>
#include <string>
#include <iterator>
#include <map>

using namespace std;

int main()
{
	string userInput;

	//initializes map and enters pairs
	map<string, string> stateDataMap;
	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));
	
	//Allows user input for state
	while (userInput != "exit") {
		cout << "Enter a state: ";
		getline(cin, userInput);
		if (stateDataMap.find(userInput) != stateDataMap.end()) {
			cout << stateDataMap.at(userInput) << "\n";
		}
		
	}

	//replace Sacramento to Los Angelos
	stateDataMap["California"] = "Los Angelos";

	//Display map values in console
	map<string, string>::iterator i;
	for (i = stateDataMap.begin(); i != stateDataMap.end(); ++i) {
		cout << i->first << ", " << i->second << "\n";
	}

}