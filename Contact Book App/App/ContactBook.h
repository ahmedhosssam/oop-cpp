#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include "PhoneNumber.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

class ContactBook {
  private:
    static Contact contactArray[];
    int contactNum;
    int option;

 public:
    static Contact arr[];
    ContactBook();
    void getOptions();
    void displayContacts();
    void clearScreen();
    void addNewContact();
};


#endif