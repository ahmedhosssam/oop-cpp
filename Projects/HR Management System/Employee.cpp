#include <iostream>
#include <string>

#include "Employee.h"
#include "HourlyEmployee.h"

using namespace std;

Employee::Employee ()
{
  cout << "ID : " << employeeID << endl;
  Employee::employeeID++;
}

int Employee::employeeID = 0;

void Employee::setDetails()
{
  cout << "Name : "; 
  std::getline(cin, name);

  cout << "Phone : "; cin >> phone;
  cout << "Email : "; cin >> email;
  cout << "Job Title : "; cin >> jobTitle;
}

void Employee::getDetails()
{
  cout << "Name : " << name << endl;
  cout << "Phone : " << phone << endl;
  cout << "Email : " << email << endl;
  cout << "Job Title : " << jobTitle << endl;
}

double Employee::getSalary() { return salary; }

double Employee::calculatePay( double salary ) { return salary; }