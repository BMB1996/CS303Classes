#pragma once
#include <string>

using namespace std;

class Employee {
public:
	string name;
	double pay;
	double healthInsurance;
private:
	virtual int CalcVacation();
	virtual void CalcHealthInsurance();
	virtual double CalcWeeklyPay();
};