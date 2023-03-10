#include <iostream>
using namespace std;

void starline(); 
void repchar(char, int); // function declaration

int main ()
	{

	repchar('-', 45);

	repchar('*',30);
	cout << "Date type     Range" << endl;

	repchar('*',30);

	cout << "char     -128 to 127" << endl;
	cout << "short     -32,768 to 32,767" << endl;
	cout << "int     System dependent" << endl;
	cout << "long    -2,147,483,648 to 2,147,483,647 " << endl;

	repchar('*',30);
	
	repchar('-', 45);

	return 0;
	}


void starline() // function declaration
	{
	for(int j=0 ; j<45; j++)
		cout << "*";
	cout << endl;
	}

void repchar(char ch, int n)
	{
	for (int i=0 ; i < n ; i++)
		cout << ch;
	cout << endl;
	}
