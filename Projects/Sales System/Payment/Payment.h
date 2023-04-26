#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include <string>
using namespace std;

class Payment {
  private:
    string paid_date;
    double amount;
  public:
    Payment();
    void pay();
    void update();
};

#endif