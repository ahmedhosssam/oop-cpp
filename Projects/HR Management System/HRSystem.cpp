#include <iostream>
#include <cstdlib> // for system() function
#include <chrono> // for sleep() function
#include <thread> // for sleep() function

#include "HRSystem.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

int HRSystem::countEmployees = 0;

HRSystem::HRSystem()
{
  clearScreen();
  cout << "Enter Your name : "; 
  std::getline(cin, hrName);

  while(countEmployees <= 35)
  {
    clearScreen();
    if (countEmployees == 0 )
    {
    cout << "Welcome Mr." << hrName << " !\n";
    }

    cout << "Choose one of the following options : \n";
    cout << "1: Add a new employee\n";
    cout << "2: Display all employees\n";
    cout << "3: Edit Employee\n";
    cout << "4: Delete Employee\n";
    cout << "5: Find an Employee\n";
    cout << "6: Display Payroll\n";

    int option;
    cout << "==> "; cin >> option;
    switch (option)
    {
      case 1:
        addEmployee();
        break;
      case 6:
        CalcTotalPayroll();
        break;
      default:
        break;
    }

    cout << "\nDONE !\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 3 seconds
    clearScreen();
  }
}

HRSystem::~HRSystem()
{
  //delete[] EmployeeList;
}

void HRSystem::addEmployee()
{
  clearScreen();
  int option;

  cout << "Choose the type of the Employee : ";
  cout << "1: Hourly Employee -- 2: Salaried Employee\n";
  cin >> option;

  switch (option)
  {
  case 1:
    EmployeeList[countEmployees] = new HourlyEmployee;
    countEmployees++;
    break;
  case 2:
    EmployeeList[countEmployees] = new SalariedEmployee;
    countEmployees++;

  default:
    break;
  }
}

void HRSystem::clearScreen()
{
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}

void HRSystem::CalcTotalPayroll()
{
  totalPayroll = 0;
  for(int i = 0 ; i < countEmployees ; i++)
  {
    totalPayroll += EmployeeList[i]->getSalary();
  }

  cout << "Total Payroll = $" << totalPayroll << endl;
}