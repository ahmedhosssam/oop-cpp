#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <iostream>
#include <string>

#include "Employee.h"

class CommissionEmployee : public Employee
{
  public:
    double target;
    double rate;
    double getSalary();
    void getDetails(); 
};

#endif

