#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	// Pointers to Pointers :

	int x = 5;
	int *p = &x;
	*p = 6;

	int **q = &p;
	int ***r = &q;

	cout << *p << endl; // 6
	cout << **q << endl; // 6
	cout << ***r << endl; // 6
	cout << *q << endl; // address of p
	cout << *r << endl; // address of q
	cout << **r << endl; // address of p

	return 0;
}
