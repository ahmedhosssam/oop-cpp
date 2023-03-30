#include <iostream>

using namespace std;

void Double( int *A, int size )
{
	int i, sum = 0;
	for ( i = 0 ; i < size ; i++ )
	{
		A[i] = 2 * A[i];
	}
}

int main()
{
	int A[] = { 1,2,3,4,5,6 };
	int size = sizeof(A) / sizeof(A[0]);

	// cout << size << endl ;

 	Double( A, size );

	for ( int j = 0 ; j < size ; j++ )
		cout << A[j] << endl;
	
	return 0;
}
