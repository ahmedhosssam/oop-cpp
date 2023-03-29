#include <iostream>
#include <iomanip>	// for setprecision , etc.

using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
	double sales[DISTRICTS][MONTHS];	// TWO DIMENSIONAL ARRAY DEFINITION

	for ( int d = 0 ; d < DISTRICTS ; d++ )
		for ( int m = 0 ; m < MONTHS ; m++ )
			{
			cout << "Enter sales for district " << d+1 << " , month " << m+1 << ": ";

			cin >> sales[d][m];
			}

			

	return 0;
}
