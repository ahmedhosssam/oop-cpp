#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include "Employee.h"

class Manager : public Employee
{
  private:
    double bonus;
  
  public:
    void addBonus(double moreBonus);
    void setDetails();
    void getDetails();
    double getSalary();
};

#endif