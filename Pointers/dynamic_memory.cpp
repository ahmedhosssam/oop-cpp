#include <iostream>

using namespace std;

int main()
{
	int a;	// goes on the --> "stack"
	int *p;

	p = new int;	// goes on the --> "heap"

	*p = 10;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	delete p;

	// a dynamic array :

	p = new int[20]; // goes on the --> "heap"

	delete[] p;
	
	return 0;
}
