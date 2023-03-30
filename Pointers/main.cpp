#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a;
	int *p;

	a = 10;
	
	p = &a;

	cout << "a = " << a << " , 10"  << endl; // 10
	cout << "&a = " << &a <<" , address of a" << endl; // address of a
	cout << "p = " << p << " , address of a"  << endl; // adress of a
	cout << "*p = " << *p << " , 10 ( value of a) " << endl; 
	cout << "&p = " << &p << " , adress of p" << endl;

	int b = 20;
	*p = b; // still points to a , so it now changed the value of a to 20

	cout << "&b = " << &b << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "a = " << a << endl; // changed to 20

	// pointer arithmetic
	// printf("Address of p is %d\n",p);
	
	printf("a = %d\n",a);

	return 0;
}
