#include "PhoneNumber.h"
#include "ContactBook.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

// Constructor
ContactBook::ContactBook() {
      getOptions();
    }

void ContactBook::clearScreen() {
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}
void ContactBook::getOptions() {
  cout << "Choose one of the following options :\n";
  cout << "1- Add a new contact\n"; 
  cout << "2- Display all contacts\n";
  cout << "3- Exit the program\n";

  cin >> option;

  switch (option)
  {
  case 1:
    addNewContact();
    break;
  case 2:
    displayContacts();
    break;
  case 3:
    clearScreen();
    break;
  default:
    clearScreen();
    break;
  }
}

// display all contacts in --> Contact ContactBook::arr[]
void ContactBook::displayContacts() {
  clearScreen();

  for (int i = 0; i < Contact::currentContact; i++) {
    cout << "------------------------------" << endl;
    arr[i].getInfo() ;
  }
  cout << "<<------------------------------>>\n\n" << endl;
  getOptions();
}

// create new objects from "Contact" class
void ContactBook::addNewContact() {
  string contactName;
  string gender;
  string email;
  string phoneNumber;

  clearScreen();

  cout << "Contact Name : "; cin >> contactName;
  cout << "\nPhone Number : "; cin >> phoneNumber;
  cout << "\nEmail : "; cin >> email;
  cout << "\nGender : "; cin >> gender;

  PhoneNumber newPhone(phoneNumber, "Mobile");
  Contact newContact(contactName ,gender, email, newPhone);

  cout << Contact::currentContact << endl;
  cout << "<<------------------------------>>\n\n" << endl;
  getOptions();
}


Contact ContactBook::arr[] = {};
