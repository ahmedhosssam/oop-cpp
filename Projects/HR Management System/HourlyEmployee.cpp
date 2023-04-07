#include <iostream>
#include <string>

#include "HourlyEmployee.h"
#include "Employee.h"

using namespace std;

HourlyEmployee::HourlyEmployee() {}

void HourlyEmployee::getDetails()
{
  Employee::getDetails();
  cout << "Hours Work : " << hoursWork << endl;
  cout << "Rate : " << rate << endl;
}

void HourlyEmployee::setDetails() {
  Employee::setDetails();
  cout << "Hours Work : "; cin >> hoursWork;
  cout << "Rate : "; cin >> rate;
}

void HourlyEmployee::getSalary() {}