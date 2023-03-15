#include "PhoneNumber.h"
#include "Contact.h"
#include "ContactBook.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
  PhoneNumber testNum("01012520893", "Mobile");
  Contact ahmed("Ahmed Hossam", "Male", "hoss4614@gmail.com", testNum);
  Contact bob("Bob", "Male", "bob@gmail.com", testNum);
  Contact andrew("Andrew", "Male", "andrew@gmail.com", testNum);

  ContactBook book;
  // book.getOptions();
  // book.getCurrentOption();

  return 0;
}