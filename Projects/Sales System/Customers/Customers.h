#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <iostream>
#include <string>
#include "../Customer/Customer.h"
using namespace std;

class Customers {
  private:
    Customer* customerList[50];
    static int countCustomers;
  public:
    Customers();
    void addCustomer();
    void editCutomer();
    void deleteCustomer();
    void showAllCustomers();
    void clearScreen();
};

#endif