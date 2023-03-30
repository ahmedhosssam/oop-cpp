#include <iostream>

using namespace std;

void Increment( int *x )
{
	*x = *x + 1;
	cout << "Address of a in increment : " << x << endl; // x now is an address
}

int main()
{
	int a = 10;
	Increment(&a);

	cout << "a = " << a << endl; // still 10
	cout << "Address of a in increment : " << &a << endl;
	
	return 0;
}
