#ifndef CONTACT_H
#define CONTACT_H

#include "PhoneNumber.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

class Contact {
  private:
    string name;
    string gender;
    string email;
    PhoneNumber number;

    static int currentContact;

  public:
    Contact(string name, string gender, string email, PhoneNumber number);

    void setName( string newName );

    void setGender( string newGender );

    void setEmail( string newEmail );

    void getInfo();

    void getCount();
};

#endif