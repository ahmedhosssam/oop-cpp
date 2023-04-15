#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
  protected:
    string name;
    string phone;
    string email;
    string jobTitle;
    double salary;
    int employeeID;
  
  public:
    Employee(); // Constructor
    virtual void setDetails(); // make the user enter the data
    virtual void getDetails(); // display employee data to user
    virtual double getSalary();
    virtual double calculatePay( double salary );

};

#endif