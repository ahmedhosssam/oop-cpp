#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
  public:
    double salary;
    SalariedEmployee(); // constructor
    void getSalary();
    void getDetails();
    void setDetails();
};

#endif