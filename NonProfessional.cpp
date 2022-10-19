
#include "NonProfessional.h"
#include <string>
#include <iostream>

using namespace std;

void NonProfessional::SetSalary() {
	cout << "Enter the hourly wage: ";
	cin >> pay;
}

void NonProfessional::CalcHealthInsurance() {
	cout << "Enter the number of hours worked per week: ";
	double hours;
	cin >> hours;
	cout << "Company contributions for the year is " << hours * 52 * pay * 0.04 << "\n";
}

double NonProfessional::CalcWeeklyPay() {
	cout << "Enter the number of hours worked per week: ";
	double hours;
	cin >> hours;

	cout << "Weekly pay is " << hours * pay << "\n";
	return hours * pay;
}
