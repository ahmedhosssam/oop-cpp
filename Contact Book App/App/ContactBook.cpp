#include "PhoneNumber.h"
#include "ContactBook.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;


ContactBook::ContactBook() {
      contactNum = Contact::currentContact;
      cout << contactNum << endl;
      for (int i = 0; i < contactNum; i++) {
        arr[i].getInfo() ;
        cout << "------------------------------" << endl;
      }
    }

Contact ContactBook::arr[] = {};