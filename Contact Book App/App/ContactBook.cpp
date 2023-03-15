#include "PhoneNumber.h"
#include "ContactBook.h"
#include "Contact.h"
#include <iostream>
#include <string>
#include <ncurses.h>

using namespace std;

// Constructor
ContactBook::ContactBook() {
      contactNum = Contact::currentContact;
      getOptions();
    }

void ContactBook::clearScreen() {
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}
void ContactBook::getOptions() {
  cout << "Welcome to the Contact Book App !\n";
  cout << "Choose one of the following options :\n";
  cout << "1- Add a new contact\n"; 
  cout << "2- Display all contacts\n";
  cout << "3- Exit the program\n";

  cin >> option;



  switch (option)
  {
  case 1:
    // still
    break;
  case 2:
    displayContacts();
    break;
  default:
    break;
  }
}


void ContactBook::displayContacts() {
  clearScreen();

  for (int i = 0; i < contactNum; i++) {
    cout << "------------------------------" << endl;
    arr[i].getInfo() ;
  }
    cout << "<<------------------------------>>\n\n" << endl;
  getOptions();
}


Contact ContactBook::arr[] = {};