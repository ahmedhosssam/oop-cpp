#include <iostream>
using namespace std;

float lb_counter(float);

int main ()
	{

	float pounds, kgs;

	cout << "Enter weight in pounds : ";
	cin >> pounds;

	kgs = lb_counter(pounds);

	cout << "Your Weight in Kgs : " << kgs << " kg " << endl;

	return 0;
	}


float lb_counter(float pounds)
	{
	float kgs = 0.453 * pounds;
	return kgs;
	}
