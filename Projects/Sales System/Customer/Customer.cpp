#include <iostream>
#include <string>

#include "Customer.h"
using namespace std;

Customer::Customer() {
}

void Customer::setDetails() {
  cout << "Phone Number : "; cin >> phone;
}

void Customer::getDetails() {
  cout << "Phone Number : " << phone << endl;
}