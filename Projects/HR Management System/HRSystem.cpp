#include <iostream>
#include <cstdlib> // for system() function
#include <chrono> // for sleep() function
#include <thread> // for sleep() function

#include "HRSystem.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "Manager.h"

using namespace std;

int HRSystem::countEmployees = 0;

HRSystem::HRSystem()
{
  clearScreen();
  cout << "Enter Your name : "; 
  std::getline(cin, hrName);

  clearScreen();
  cout << "Welcome Mr." << hrName << " !\n\n";
  getOptions();
}

HRSystem::~HRSystem()
{
}

void HRSystem::getOptions()
{
  while(countEmployees <= 35)
    {
      cout << "Choose one of the following options : \n\n";
      cout << "1: Add a new employee\n";
      cout << "2: Display all employees\n";
      cout << "3: Edit Employee\n";
      cout << "4: Delete Employee\n";
      cout << "5: Display Payroll\n";

      int option;
      cout << "==> "; cin >> option;
      switch (option)
      {
        case 1:
          addEmployee();
          break;
        case 2:
          ShowAll();
          break; 
        case 3:
          editEmployee();
          break;
        case 4:
          deleteEmployee();
          break;
        case 5:
          CalcTotalPayroll();
          break;
        default:
          break;
      }
    }
}

void HRSystem::addEmployee()
{
  clearScreen();
  int option;

  cout << "Choose the type of the Employee : \n\n";
  cout << "1: Hourly Employee\n2: Salaried Employee\n3: Commission Employee\n4: Manager Employee\n";
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
    break;
  case 3:
    EmployeeList[countEmployees] = new CommissionEmployee;
    countEmployees++;
    break;
  case 4:
    EmployeeList[countEmployees] = new Manager;
    countEmployees++;
    break;

  default:
    break;
  }

  cout << "\nDONE !\n";
  std::this_thread::sleep_for(std::chrono::seconds(1)); // wait for 3 seconds
  clearScreen();
}

void HRSystem::clearScreen()
{
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}

void HRSystem::CalcTotalPayroll()
{
  clearScreen();
  totalPayroll = 0;
  for(int i = 0 ; i < countEmployees ; i++)
  {
    totalPayroll += EmployeeList[i]->getSalary();
  }

  cout << "Total Payroll = $" << totalPayroll << endl;
  cout << "<------------------------>\n";
}

void HRSystem::ShowAll()
{
  clearScreen();

  if ( countEmployees == 0 ) { cout << "There are no employees yet.\n"; }

  for(int i = 0 ; i < countEmployees ; i++)
  {
    EmployeeList[i]->getDetails();
    cout << "\n";
  }
  cout << "<------------------------>\n";
}

void HRSystem::editEmployee()
{
  int option;

  if ( countEmployees == 0 )
  {
    cout << "There are no employees to edit.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds
    clearScreen();
    return;  
  }
  clearScreen();

  cout << "Enter the Employee's ID : "; cin >> option;
  if ( option > countEmployees - 1 || option < 0 )
  {
    cout << "Invalid ID .. please enter an ID between 0 and " << countEmployees << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3)); // wait for 2 seconds
    clearScreen();
    editEmployee(); // recursion , I don't know if this the write choice or not
  }
  EmployeeList[option]->setDetails();

  cout << "\nDONE !\n";
  std::this_thread::sleep_for(std::chrono::seconds(1)); // wait for 1 seconds
  clearScreen();
}

void HRSystem::deleteEmployee()
{
  if ( countEmployees == 0 )
    {
      cout << "There are no employees to delete.\n";
      std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds
      clearScreen();
      return;  
    }

  clearScreen();
  int deleteID;
  cout << "Enter the Employee's ID : "; cin >> deleteID;

  if ( deleteID > countEmployees )
  {
    cout << "this ID doesn't exist\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // wait for 2 seconds
    deleteEmployee();
  }

  for( int i = deleteID ; i < countEmployees ; i++ )
  {
    EmployeeList[i] = EmployeeList[i+1];
  }
  countEmployees--;

  cout << "\nDONE !\n";
  std::this_thread::sleep_for(std::chrono::seconds(1)); // wait for 1 seconds
  clearScreen();
}