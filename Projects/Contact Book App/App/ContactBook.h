#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include "PhoneNumber.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

class ContactBook {
  private:
    int option; // to choose one of the options e.g. --> display contacts & add contact

 public:
    static Contact arr[]; // contains all contact objects that was created by "Contact" class
    ContactBook();
    void getOptions(); // display all options to user
    void displayContacts();
    void clearScreen();
    void addNewContact(); // create new objects from "Contact" class
};


#endif