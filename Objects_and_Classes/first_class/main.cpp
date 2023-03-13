#include <iostream>
using namespace std;

class smallobj     // Define a class
{
	private:
		int somedata;	// Class data
	public:
		void setdata( int d) // Member Function to set data
			{ somedata = d; }
		void getdata() // Member Function to display data
			{ cout << "Data is : " << somedata << endl; }
};

int main()
{

	smallobj obj1;

	obj1.setdata(69); // Set the private data (somedata) to 69

	obj1.getdata(); // Display the obj1's somedata
	
	return 0;
}
