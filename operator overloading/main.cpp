#include <iostream>
#include <string>

using namespace std;

class Counter
{
	private:
		unsigned int count;
	
	public:
		Counter()   // constructor
		{ }

		Counter( int c ) : count(c)    // constructor
		{ }

		int getCount()
		{
			return count;
		}

		Counter operator ++ ()
		{
			++count;
			return Counter(count);
		}
		
   		Counter operator -- ()
		{
			--count;
			return Counter(count);
		}
};


class Distance
{

	private:
		int feet;
		int inches;
	
	public:
		Distance()
		{ }

		Distance( int f , int i ) : feet(f) , inches(i)
		{ }

		void display()
		{
			cout << "Feets = " << feet << endl;
			cout << "Inches = " << inches << endl;
		}

		Distance operator + ( Distance d2 ) const	//return sum
		{
			int f = feet + d2.feet;
			float i = inches + d2.inches;

			return Distance( f , i );
		}
};


int main()
{
	Counter c1(5); //6
	Counter c2(6); //7

	Counter c3 = ++c1; //6
	Counter c4 = ++c2; //7

	Distance d1(12,23);
	Distance d2(14,65);

	Distance d3 = d1 + d2;
	d3.display();

	return 0;
}
