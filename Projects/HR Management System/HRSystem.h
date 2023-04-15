#ifndef HRSYSTEM_H
#define HRSTSTEM_H

#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

class HRSystem
{
  protected:
    Employee* EmployeeList[35];
    string hrName;

  public:
    static int countEmployees; // to count how many employees are there
    HRSystem(); //Constructor
    ~HRSystem(); //Deconstructor
    void CalcTotalPayroll();
    void addEmployee();
    void editEmployee();
    void delEmployee();
    void FindEmployee();
    void ShowAll();
    void clearScreen();
};

#endif