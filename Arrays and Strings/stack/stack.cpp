#include <iostream>

using namespace std;

class Stack
{
	private:
	enum { MAX = 10 };
	int st[MAX];	// STACK : Array of integers
	int top;	 	// number of "top" of stack

	public:
	Stack()
		{ top = 0; }

	void push(int var)
		{ st[++top] = var; }

	int pop()
		{ return st[top--]; }

};


int main ()
{
	Stack s1;

	s1.push(69);
	s1.push(22);

	cout << "1: " << s1.pop() << endl;
	cout << "2: " << s1.pop() << endl;


	return 0;
}
