#include <iostream>
using namespace std;

void aFunc ( int &a , const int&b );

int main()
{

	cout << "HELLO WORLD" << endl;

	return 0;
}

void aFunc (int &a , const int &b)
	{
	a = 107; // OK
	// b = 111; // ERROR : b is read-only variable
	}
