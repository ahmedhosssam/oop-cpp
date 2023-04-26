#include <iostream>
#include <string>
#include "Person.h"
#include "../Customer.h"
using namespace std;

Person::Person() {
  Person::setDetails();
}

void Person::setDetails() {
  cout << "Full Name : "; cin >> fullname;
  Customer::setDetails(); // phone number
  cout << "Billing Address : "; cin >> billing_address;
}

void Person::getDetails() {
  cout << "Full Name : " << fullname << endl;
  Customer::getDetails(); // phone number
  cout << "Billing Address : " << billing_address << endl;
}
