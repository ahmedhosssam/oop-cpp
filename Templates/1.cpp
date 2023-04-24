#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(T value)
{
	cout << "the value is : " << value << endl;
}

int main()
{
	print(69);
	return 0;
}
