#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

class HRSystem
{
  private:
    Employee EmployeeList;

  public:
    void CalcTotalPayroll();
    void addEmployee();
    void editEmployee();
    void delEmployee();
    void FineEmployee();
    void ShowAll();
};

#endif