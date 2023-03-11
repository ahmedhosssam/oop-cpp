#include <iostream>
#include <typeinfo>
using namespace std;

void intfrac(float , float&, float& );
int main ()
	{

	float number , intpart, fracpart;

	do {
		cout << "Enter A Real Number: ";
		cin >> number;

		intfrac(number, intpart, fracpart);
		cout << "Integer Part is : " << intpart
			 << " , fraction part is " << fracpart << endl;
	
	} while ( number != 0.0 );
	return 0;
	}


void intfrac(float n , float &intp , float &fracp)
	{
	long temp = static_cast<long>(n); // Convert to long ( Remove the fraction part )
	intp = static_cast<float>(temp); // Back to float
	fracp = n - intp; // Subtract integer part
	}
