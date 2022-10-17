#pragma once

//abstract employee class
class Employee {
public:
	//pure virtual functions
	virtual double pay() = 0;
	virtual int vacation() = 0;
	virtual double healthCon() = 0;
};

class Professional : public Employee { // Professional class, derived from Employee
public:
	double salary;
	int vacationDays;

	Professional(double salary, int vacationDays) : salary(salary), vacationDays(vacationDays) {}

	double pay() { //returns set salary
		return salary;
	}

	int vacation() { //returns set amount vacations days 
		return vacationDays;
	}

	double healthCon() { //returns health care contribution, based on 10% of salary
		return salary * 0.10;
	}
};

class Nonprofessional : public Employee { // Nonprofessional class, derived from Employee
public:
	int hours;
	double rate;

	Nonprofessional(int hours, double rate) : hours(hours), rate(rate) {}

	double pay() {
		return hours * rate;
	}

	int vacation() { //Returns amount of vacation days for every 24 hours worked.
		return hours / 24;
	}

	double healthCon() { // returns health care contribution, based on 13% of earnings.
		return (hours * rate) * 0.13;
	}
};