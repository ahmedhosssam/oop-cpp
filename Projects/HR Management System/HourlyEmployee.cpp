#include <iostream>
#include <string>

#include "HourlyEmployee.h"
#include "Employee.h"

using namespace std;

HourlyEmployee::HourlyEmployee()
{
  HourlyEmployee::setDetails();
}

void HourlyEmployee::getDetails()
{
  Employee::getDetails();
  cout << "Working Hours : " << hoursWork << " Hours " << endl;
  cout << "Rate : " << rate << " $/hr" << endl;
  cout << "Total Earning : $" << salary << endl;
}

void HourlyEmployee::setDetails()
{
  cin.ignore(1, '\n');
  Employee::setDetails();
  cout << "Working Hours : "; cin >> hoursWork;
  cout << "Rate : "; cin >> rate;
  calculatePay();
}

double HourlyEmployee::getSalary() { return salary; }

void HourlyEmployee::addHours( double moreHours ) { hoursWork += moreHours; }

void HourlyEmployee::calculatePay()
{ salary = rate * hoursWork; }