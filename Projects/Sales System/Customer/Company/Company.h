#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>
using namespace std;

#include "../Customer.h"

class Company : public Customer {
  private:
    string location;
    string company_name;
  public: 
    Company();
    void getDetails();
    void setDetails();
};

#endif