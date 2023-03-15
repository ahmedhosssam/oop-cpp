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

 public:
    static Contact arr[];
    ContactBook();
};


#endif