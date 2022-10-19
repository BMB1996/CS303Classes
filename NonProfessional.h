
#include "Employee.h"

using namespace std;

class NonProfessional :public Employee {
private:
	int vacationDays;
public:
	int CalcVacationDays() { return vacationDays; }
	void SetSalary();
	double GetSalary() { return pay; }
	void CalcHealthInsurance();
	double CalcWeeklyPay();
};
