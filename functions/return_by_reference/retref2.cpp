#include <iostream>
using namespace std;

int &foo( int[], int );
int &bar ( int& );

int main()
{
	int b[] = { 8 , 7 , 6 };
	int x = 69;
	int test = 6969;

	foo( b , 1 ) = 69; // --> change the element b[1] to 69

	cout << "Before : " << test << endl;
	bar( test ) = 696969;	
	cout << "After : " << test << endl;

	for ( int &i :  b)
		cout << i << endl; // 8 69 6

	return 0;
}


int& foo( int a[], int i )
{
	return a[i];
}

int &bar ( int &j )
	{
	return j;
	}
