#include <iostream>
#include <string>
#include "Company.h"
#include "../Customer.h"
using namespace std;

Company::Company() {
  Company::setDetails();
}

void Company::setDetails() {
  cout << "Company Name : "; cin >> company_name;
  Customer::setDetails(); // phone number
  cout << "Location : "; cin >> location;
}

void Company::getDetails() {
  cout << "Company Name : " << company_name << endl;
  Customer::getDetails(); //phone number
  cout << "Location : " << location << endl;
}