#include "PhoneNumber.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

class ContactBook {
  private:
    static Contact contactArray[50];

};


int main()
{
  PhoneNumber testNum("01012520893", "Mobile");
  Contact ahmed("Ahmed Hossam", "Male", "hoss4614@gmail.com", testNum);
  Contact bob("Bob", "Male", "bob@gmail.com", testNum);
  Contact adin("Adin", "Male", "adin@gmail.com", testNum);
  Contact andrew("Andew", "Male", "andrew@gmail.com", testNum);

  // cout << testNum.getPhone() << endl;
  // cout << testNum.getType() << endl;

  ahmed.getInfo();
  cout << "----------------------" << endl;
  andrew.getInfo();
  ahmed.getCount();

  return 0;
}