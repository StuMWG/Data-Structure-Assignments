#pragma once
using namespace std;

//compares input value to each item in the array until it finds the first match
int intCheck(int valueIn, int arrayIn[], int size) {
	for (int i = 0; i < size; i++) {
		if (valueIn == arrayIn[i]) {
			return i;
		}
		if (valueIn == -1) {
			return -1;
		}
	}
	return -1;
}
//sets a new value at a specified index
void setValue(int index, int arrayIn[], int mod, int  size) {
	int oldVal = 0;
	int newVal = 0;
	if (index >= size || index < 0) {
		cout << "No Value";
	}
	else {
		oldVal = arrayIn[index];
		newVal = arrayIn[index] = mod;
		cout << "Old value: " << oldVal << " New value: " << newVal;
	}
}
//adds a new value to the end of the array
int* addValue(int valueIn, int arrayIn[], int size) {
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = arrayIn[i];
	}
	arr[size - 1] = valueIn;
	return arr;
}
// removes a value from the array 
int* removeValue(int index, int arrayIn[], int size) {
	int* arr = new int[size];
	if (index > 0 && index < size) {
		for (int i = 0; i < size; i++) {
			if (i < index) {
				arr[i] = arrayIn[i];
			}
			else {
				arr[i] = arrayIn[i + 1];
			}

		}
		return arr;
	}
}
