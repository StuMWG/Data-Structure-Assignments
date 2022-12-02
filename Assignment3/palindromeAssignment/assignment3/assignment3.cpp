// assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Michael Gonzalez

#include <iostream>
#include "Header.h"
#include <string>
#include <queue>

using namespace std;

int main()
{
	string lineIn;

	// initializes the queue and populates it
	queue <int> q;
	q.push(1);
	q.push(2);
	q.push(4);
	q.push(8);
	q.push(16);

	//function to remove the first element of the queue, and place it at the back
	move_to_rear(q);

	cout << "Enter a palindrome: ";
	getline(cin, lineIn);
	cout << lineIn + palindromeTest(lineIn);

	//displays the queue to console
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();

	}

}

