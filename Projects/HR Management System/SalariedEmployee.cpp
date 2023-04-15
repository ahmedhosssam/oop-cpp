#include <iostream>
#include <string>

#include "SalariedEmployee.h"
#include "Employee.h"

using namespace std;

SalariedEmployee::SalariedEmployee() {}

double SalariedEmployee::getSalary() { return salary; }

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