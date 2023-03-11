#include <iostream>
using namespace std;

void reforder( int& , int& );

int main ()
	{

	int x , y;

	cout << "Enter x = "; cin >> x;
	cout << "Enter y = "; cin >> y;

	reforder( x , y );

	cout << "x = " << x << " , y = " << y << endl;
	return 0;
	}


void reforder( int &x , int &y )
	{
		if (x > y) {
		int temp = x;
		x = y;
		y = temp;
		}
	}

