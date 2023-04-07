#include "PhoneNumber.h"
#include <iostream>
#include <string>

using namespace std;

PhoneNumber::PhoneNumber() {}

PhoneNumber::PhoneNumber( string num, string type ) : num(num) , type(type) {
  this->num = num;
  this->type = type;
}

string PhoneNumber::getPhone() { return num; }

string PhoneNumber::getType() { return type; }

void PhoneNumber::setPhone( string newPhone ) { num = newPhone; }

void PhoneNumber::setType( string newType ) { type = newType; }
