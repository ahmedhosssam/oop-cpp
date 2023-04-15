#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <iostream>
#include <string>

#include "Employee.h"

class CommissionEmployee : public Employee
{
  public:
    CommissionEmployee();
    double target;
    double salary;
    void setDetails();
    double getSalary();
    void getDetails(); 
};

#endif

