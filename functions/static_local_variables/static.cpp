#include <iostream>
using namespace std;

void foo();

int main()
	{
	foo();
	foo();
	foo();

	return 0;
	}

void foo()
	{
	static int x = 0;
	x++;
	cout << "x = " << x << endl;
	}
