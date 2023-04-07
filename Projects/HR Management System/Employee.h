#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {
  protected:
    int employeeID;
    string name;
    string phone;
    string email;
    string jobTitle;
  
  public:
    void getDetails(); // display employee data to user
    virtual void getSalary();
    double calculatePay();

};

#endif