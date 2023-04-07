#include <iostream>
#include <string>

#include "Employee.h"
#include "HRSystem.h"
#include "HourlyEmployee.h"
#include "Department.h"
#include "SalariedEmployee.h"

using namespace std;

int main()
{
  Employee* ahmed = new HourlyEmployee;
  ahmed->setDetails();
  ahmed->getDetails();

  return 0;
}