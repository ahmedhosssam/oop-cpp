#ifdef PHONENUMBER_H
#define PHONENUMBER_H
#include <string>

using namespace std;

class PhoneNumber {
  private:
    string number;
    string type;

  public:
    PhoneNumber(string number, string type);

    string getPhone() const;

    string getType() const;

    string setType( string newNumber );

    string setPhone( string newPhone );
}

#endif