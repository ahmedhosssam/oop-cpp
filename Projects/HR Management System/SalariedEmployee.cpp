#include <iostream>
#include <string>

#include "SalariedEmployee.h"
#include "Employee.h"

using namespace std;

SalariedEmployee::SalariedEmployee()
{
  SalariedEmployee::setDetails();
}

double SalariedEmployee::getSalary() { return salary; }

void SalariedEmployee::getDetails()
{
  Employee::getDetails();
  cout << "Salaray : $" << salary << endl;
}

void SalariedEmployee::setDetails()
{
  cin.ignore(1, '\n');
  Employee::setDetails();
  cout << "Salary : $"; cin >> salary;
}