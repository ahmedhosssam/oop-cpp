#include <iostream>
#include <string>

#include "SalariedEmployee.h"
#include "Employee.h"

using namespace std;

SalariedEmployee::SalariedEmployee() {}

void SalariedEmployee::getSalary()
{
  cout << "Salary : $" << salary << endl;
}

void SalariedEmployee::getDetails()
{
  Employee::getDetails();
  cout << "Salaray : $" << salary << endl;
}

void SalariedEmployee::setDetails()
{
  Employee::setDetails();
  cout << "Salary : $"; cin >> salary;
}