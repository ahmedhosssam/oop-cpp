#include "PhoneNumber.h"
#include "ContactBook.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;


ContactBook::ContactBook() {
      contactNum = Contact::currentContact;
      cout << contactNum << endl;
      cout << arr << endl;
    }

Contact ContactBook::arr[] = {};