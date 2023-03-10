#include <iostream>
using namespace std;

void printVar( int &x );
void swap(int &x , int &y);

int main ()
	{
	int a = 5;
	int b = 69;

	cout << " a = " << a << " , b = " << b << endl;
	cout << "************************************" << endl;

	swap( a, b );

	cout << "************************************" << endl;

	cout << " a = " << a << " , b = " << b << endl;

	return 0;
	}


void printVar( int &x )
	{
	cout << "x : " << x << endl;
	}

void swap ( int &x , int &y )
	{
	cout << "Before : x = " << x << " , y = " << y << endl;
	int temp = x;
	x = y;
	y = temp;

	cout << "***************************************" << endl;
	cout << "After : x = " << x << " , y = " << y << endl;

	}
