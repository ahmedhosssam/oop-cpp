#include <iostream>
using namespace std;

void getavg( float );

int main()
	{
	float data = 1, avg;

	while ( data != 0 )
		{
		cout << "Enter a number : ";
		cin >> data;
		getavg(data);
		}

	return 0;
	}

void getavg( float newdata )
	{
	static float total = 0;
	static int count = 0;

	// ^^^ static variables are initialized only --> once per program

	count++;
	total += newdata;
	
	cout << "Total = " << total << " , count = " << count << endl;
}
