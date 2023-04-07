#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

class HourlyEmployee : public Employee {
  private:
    double hoursWork; // how many hours did he work
    double rate; // rate per hour ( e.g. 25$/hr )

  public:
    HourlyEmployee();
    void addHours ( int moreHours );
    void getSalary();
    void setDetails() ;
    void getDetails() ;
};

#endif