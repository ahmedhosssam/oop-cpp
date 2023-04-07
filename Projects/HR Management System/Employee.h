#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
  protected:
    static int employeeID;
    string name;
    string phone;
    string email;
    string jobTitle;
  
  public:
    Employee(); // Constructor
    virtual void setDetails(); // make the user enter the data
    virtual void getDetails(); // display employee data to user
    virtual void getSalary();
    // double calculatePay();

};

#endif