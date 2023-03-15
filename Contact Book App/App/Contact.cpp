#include "PhoneNumber.h"
#include "Contact.h"
#include "ContactBook.h"
#include <iostream>
#include <string>

using namespace std;

Contact::Contact(string name, string gender, string email, PhoneNumber number) : name(name), gender(gender), email(email), number(number)
{
  this->name = name;
  this->gender = gender;
  this->email = email;
  this->number = number;

  // cout << ContactBook::arr << endl;
  // cout << currentContact << endl;
  // cout << this << endl;
  ContactBook::arr[currentContact] = *this;
  currentContact++;
}

int Contact::currentContact = 0;

void Contact::setName( string newName ) { name = newName; }

void Contact::setGender( string newGender ) { gender = newGender; }

void Contact::setEmail( string newEmail ) { email = newEmail; }

void Contact::getCount() { cout << "Count : " << currentContact; }

void Contact::getInfo()
{
  cout << "Contact Name : " << name << endl;
  cout << "Gender : " << gender << endl;
  cout << "Email : " << email << endl;
  cout << "Phone Number : " << number.getPhone() << endl;
}