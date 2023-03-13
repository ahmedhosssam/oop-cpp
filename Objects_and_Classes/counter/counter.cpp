#include <iostream>
using namespace std;


class Counter
{
	private:
		unsigned int count; // unsigned --> because the variable will be always positive

	public:
		Counter() : count(0)	// Constructor
			{ cout << "I'm the constructor\n"; }
		void i() { count++; }
		void getcount() { cout << "Current Count : " << count << endl; }
};


int main()
{
	Counter c1;
	c1.getcount();
	
	c1.i();
	c1.i();
	c1.i();
	c1.i();
	c1.i();

	c1.getcount();

	return 0;
}
