#include <iostream>
using namespace std;

int x; // Global variable
int &setx(); // function declaration

int main()
	{

	setx() = 92; // set x to a value , using function call on let side ( sounds weird actually )
	cout << "x= " << x << endl;

	return 0;
	}

int &setx()
	{
	return x;
	}
