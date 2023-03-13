#include <iostream>
using namespace std;

class Foo
{
	private:
		int data;
	public:
		Foo() : data(0) { }		// Constructor ( Same name as class )

		~Foo() { } // Destructors ( Same class name with a tilde )
};

int main()
{
	

	return 0;
}
