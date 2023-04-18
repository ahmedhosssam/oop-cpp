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
    Manager();  // constructor
    void setDetails();
    void getDetails();
    double getSalary();
};

#endif