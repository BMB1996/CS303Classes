#pragma once
#include "Employee.h"

using namespace std;

class Professional :public Employee {
private:
	int vacationDays;
public:
	int CalcVacationDays() { return vacationDays; }
	void SetVacationDays(int days) { vacationDays = days; }
	void SetSalary();
	double GetSalary() { return pay; }
	void CalcHealthInsurance();
	double CalcWeeklyPay();
};
