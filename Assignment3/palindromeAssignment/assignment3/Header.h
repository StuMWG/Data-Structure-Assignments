#pragma once
#include <queue>
#include <stack>
using namespace std;

//function to move front element to rear of queue
void move_to_rear(queue<int>& q) {
	int temp = q.front(); //saves first element in temp
	q.push(temp); //puts temp at the end of the queue
	q.pop();//removes the first element in queue
}

string palindromeTest(string lineIn) {
	string returnString;
	int count = 0;
	stack<char> stack;
	
	//makes lineIn lowercase
	transform(lineIn.begin(), lineIn.end(), lineIn.begin(), ::tolower);

	//removes spaces from the line
	lineIn.erase(remove(lineIn.begin(), lineIn.end(), ' '), lineIn.end());

	//pushes lineIn onto the stack
	for (int i = 0; i < lineIn.size(); i++) {
		stack.push(lineIn[i]);
	}

	//while stack is not empty, it compares the elements in stack to the chars in lineIn
	while (!stack.empty()) {
		if (stack.top() != lineIn[count]) {
			returnString = " is not a palindrome \n";
			break;
		}
		else {
			returnString = " is a palindrome \n";
		}
		stack.pop();
		count++;
	}
	return returnString;
}