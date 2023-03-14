#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
#include <iostream>

using namespace std;

class PhoneNumber {
  private:
    string num;
    string type;

  public:
    PhoneNumber( string num, string type );
    string getPhone();
    string getType(); 
    
    void setPhone( string newPhone );
    void setType( string newType );
};

#endif