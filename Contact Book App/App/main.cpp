#include "PhoneNumber.h"
#include "Contact.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  PhoneNumber testNum("01012520893", "Mobile");
  Contact ahmed("Ahmed Hossam", "Male", "hoss4614@gmail.com", testNum);

  // cout << testNum.getPhone() << endl;
  // cout << testNum.getType() << endl;

  ahmed.getInfo();

  return 0;
}