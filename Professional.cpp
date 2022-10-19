#include "Professional.h"
#include <iostream>

void Professional::SetSalary() {
	double salary;
	cout << "Enter the salary: ";
	cin >> salary;
	pay = salary;
}
void Professional::CalcHealthInsurance() {
	healthInsurance = pay * 0.06;
}
double Professional::CalcWeeklyPay() {
	return pay / 52;
}

