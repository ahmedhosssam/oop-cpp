#include <iostream>
using namespace std;

class foo
{
  private:
    static int count; // "Declaration only!"
  public:
    foo()   // Constructor
      { count ++; }
    void getcount()
      { cout << "Current count " << count << endl; }
};
int foo::count = 0; // definition of count ( Static member data for foo class )

int main ()
{
  foo f1, f2,f3;

  // SAME VALUE FOR THE 3 OBJECTS
  f1.getcount();
  f2.getcount();
  f3.getcount();

  return 0;
}
