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
    double totalPayroll;

  public:
    static int countEmployees; // to count how many employees are there
    HRSystem(); //Constructor
    ~HRSystem(); //Deconstructor
    void clearScreen();
    void getOptions();
    void addEmployee();
    void CalcTotalPayroll();
    void ShowAll();
    void editEmployee();
    void deleteEmployee();
    void FindEmployee();
};

#endif

