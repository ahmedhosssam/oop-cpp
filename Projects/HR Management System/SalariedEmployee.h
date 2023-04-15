#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
  public:
    SalariedEmployee(); // constructor
    double getSalary();
    void getDetails();
    void setDetails();
};

#endif