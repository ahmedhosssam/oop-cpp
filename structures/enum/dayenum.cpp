#include <iostream>
using namespace std;

enum days_of_week { Sun , Mon , Tue , Wed , Thu , Fri , Sat }; // Specify enum type

int main ()
	{
	
	days_of_week day1, day2, day3; // dafine variables of type days_of_week

	day1 = Sun;
	day2 = Thu;
	// day3 = 8; <-- that's error

	int diff = day2 - day1; // Can do integer arithmetic

	cout << "Days Between : " << diff << endl;

	cout << "day2 : " << day2 << endl; // day2 : 4
	cout << "day1 : " << day1 << endl; // day1 : 0

	if ( day1 < day2 )
		cout << "day1 comes before day2\n";
	
	return 0;
}
