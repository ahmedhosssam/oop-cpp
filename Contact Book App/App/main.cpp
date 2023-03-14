#include "PhoneNumber.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  PhoneNumber testNum("01012520893", "Mobile");

  cout << testNum.getPhone() << endl;
  cout << testNum.getType() << endl;


  return 0;
}