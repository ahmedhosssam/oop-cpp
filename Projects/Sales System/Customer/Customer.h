#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer {
  private:
    int id;
    string phone;
  public:
    Customer();
    virtual void getDetails();
    virtual void setDetails();
};

#endif