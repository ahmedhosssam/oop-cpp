#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <string>

using namespace std;

class Department
{
  private:
    int departID;
    string departName;

  public:
    void Print(); // display information of the department
};

#endif