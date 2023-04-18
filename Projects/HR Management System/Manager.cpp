#include <iostream>
#include <string>

#include "Employee.h"
#include "Manager.h"

Manager::Manager()
{
  Manager::setDetails();
}

void Manager::setDetails()
{
  cin.ignore(1, '\n');
  Employee::setDetails();
  cout << "Salary : "; cin >> salary;
}

void Manager::getDetails()
{
  Employee::getDetails();
  cout << "Salary : $" << salary << endl;
}

double Manager::getSalary() { return salary; }

