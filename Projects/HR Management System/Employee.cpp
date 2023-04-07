#include <iostream>
#include <string>

#include "Employee.h"

Employee::Employee ( string name, string phone, string email, string jobTitle )
: name(name), phone(phone), email(email), jobTitle(jobTitle)

{
  cout << "ID : " << employeeID << endl;
  Employee::employeeID++;
}

int Employee::employeeID = 0;

void Employee::getDetails() {
  cout << "Name : " << name << endl;
  cout << "Phone : " << phone << endl;
  cout << "Email : " << email << endl;
  cout << "Job Title : " << jobTitle << endl;
}

void Employee::getSalary() {}

// double Employee::calculatePay() {}