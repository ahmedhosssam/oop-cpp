#include <iostream>
#include <string>

#include "CommissionEmployee.h"
#include "Employee.h"

using namespace std;

CommissionEmployee::CommissionEmployee()
{
  CommissionEmployee::setDetails();
}

void CommissionEmployee::setDetails()
{
  cin.ignore(1, '\n');
  Employee::setDetails();
  cout << "Target : $"; cin >> target;
  cout << "Salary : $"; cin >> salary;
}

double CommissionEmployee::getSalary() { return salary; }

void CommissionEmployee::getDetails()
{
  Employee::getDetails();
  cout << "Target : $" << target << endl;
  cout << "Salary : $" << salary << endl;
}