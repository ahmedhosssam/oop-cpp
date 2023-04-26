#include <iostream>
#include <string>
#include <cstdlib> // for system() function
#include <chrono> // for sleep() function
#include <thread> // for sleep() function

#include "../Customer/Customer.h"
#include "../Customer/Person/Person.h"
#include "../Customer/Company/Company.h"
#include "Customers.h"
using namespace std;

int Customers::countCustomers = 0;

Customers::Customers() {}

void Customers::addCustomer() {
  clearScreen();
  int option;
  cout << "Choose the type of the customer :\n";
  cout << "1 : Person\n2 : Company\n";
  cout << "==> "; cin >> option;

  switch (option)
  {
  case 1:
    customerList[countCustomers] = new Person;
    countCustomers++;
    break;
  case 2:
    customerList[countCustomers] = new Company;
    countCustomers++;
    break;
  default:
    break;
  }
  clearScreen();
}

void Customers::editCutomer() {
  clearScreen();
  if(countCustomers == 0) { cout << "There is no customers...\n"; }
  cout << "<----------------->\n";
  return;
  int option;
  cout << "Enter Id : "; cin >> option;
  customerList[option]->setDetails();
}

void Customers::deleteCustomer() {
  clearScreen();
  int option;
  cout << "Enter the Id of the customer : "; cin >> option;

  for(int i = option ; i < countCustomers-1 ; i++) {
    customerList[i] = customerList[i+1];
  }
  countCustomers--;
}

void Customers::showAllCustomers() {
  clearScreen();
  if(countCustomers == 0) { cout << "There is no customers...\n"; }
  for(int i = 0 ; i < countCustomers ; i++){
    cout << "Id : " << i << endl;
    customerList[i]->getDetails();
    cout << "<-------->\n";
  }
  cout << "<----------------->\n";
}

void Customers::clearScreen()
{
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}