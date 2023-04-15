#include <iostream>
#include <string>

#include "Employee.h"
#include "HourlyEmployee.h"
#include "HRSystem.h"

using namespace std;

Employee::Employee ()
{
  employeeID = HRSystem::countEmployees;
}


void Employee::setDetails()
{
  cout << "Name : "; 
  std::getline(cin, name);

  cout << "Phone : "; cin >> phone;
  cout << "Email : "; cin >> email;
  cout << "Job Title : ";
  cin.ignore(1, '\n');
  std::getline(cin, jobTitle);
}

void Employee::getDetails()
{
  cout << "ID : " << employeeID << endl;
  cout << "Name : " << name << endl;
  cout << "Phone : " << phone << endl;
  cout << "Email : " << email << endl;
  cout << "Job Title : " << jobTitle << endl;
}

double Employee::getSalary() { return salary; }

double Employee::calculatePay( double salary ) { return salary; }