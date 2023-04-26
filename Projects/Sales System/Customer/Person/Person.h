#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

#include "../Customer.h"

class Person : public Customer {
  private:
    string billing_address;
    string fullname;
  public:
    Person();
    void getDetails();
    void setDetails();
};

#endif