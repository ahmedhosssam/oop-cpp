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
  Employee e("Ahmed Hossam", "010696969", "ahmed@gmail.com", "CEO");
  e.getDetails();

  return 0;
}