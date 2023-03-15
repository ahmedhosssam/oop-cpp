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
      cout << contactNum << endl;
      for (int i = 0; i < contactNum; i++) {
        arr[i].getInfo() ;
        cout << "------------------------------" << endl;
      }
      cout << option << endl;
    }

void ContactBook::getOptions() {
   
}

Contact ContactBook::arr[] = {};