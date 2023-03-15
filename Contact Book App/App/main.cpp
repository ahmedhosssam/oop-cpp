#include "PhoneNumber.h"
#include <iostream>
#include <string>

using namespace std;

class Contact {
  private:
    string name;
    string gender;
    string email;
    PhoneNumber number;

  public:
    Contact(string name, string gender, string email) : name(name), gender(gender), email(email) {
      this->name = name;
      this->gender = gender;
      this->email = email;
      this->number = number;
    }

    void setName( string newName ) { name = newName; }

    void setGender( string newGender ) { gender = newGender; }

    void setEmail( string newEmail ) { email = newEmail; }

    void getInfo()
    {
      cout << "Contact Name : " << name << endl;
      cout << "Gender : " << gender << endl;
      cout << "Email : " << email << endl;
    }
};

int main()
{
  PhoneNumber testNum("01012520893", "Mobile");
  Contact ahmed("Ahmed Hossam", "Male", "hoss4614@gmail.com");

  cout << testNum.getPhone() << endl;
  cout << testNum.getType() << endl;

  ahmed.getInfo();

  return 0;
}