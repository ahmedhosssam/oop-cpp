#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MyPair {
	public:
		int first;
		int second;

		MyPair() {}
		MyPair(int first, int second) : first(first), second(second)
		{	}
		
		MyPair add( MyPair &c2 )
		{
			MyPair &c1 = *this;
			return MyPair(c1.getFirst() + c2.getFirst(), c1.getSecond() + c2. getSecond() );
		}

		MyPair operator + ( MyPair &c2 )
		{
			MyPair &c1 = *this;
			MyPair result(c1.getFirst() + c2.getFirst(), c1.getSecond() + c2. getSecond() );

			return result;
		}

		int operator [] (int pos) 
		{
			MyPair &c1 = *this;
			if(pos == 0)
				return c1.getFirst();
			return c1.getSecond();
		}

	
		void print()
		{
			cout<<"("<<first<<","<<second<<")"<<endl;
		}

		int getFirst() { return first; }
		int getSecond() { return second; }
		void setFirst() { cout << "Enter First : "; cin >> first; }
		void setSecond() { cout << "Enter Second : "; cin >> second; }
		
};

istream& operator >> (istream& is, MyPair &c2)
		{
			is >> c2.first >> c2.second;
			return is;
		}

vector<int> operator + (vector<int> &x, vector<int> &y )
{
	vector<int> z = x;
	for (int i = 0 ; i < x.size() ; i++)
	{
		z[i] += y[i];
	}
	return z;
}

string operator * ( string str, int n )
{
	string result;
	for (int i = 0; i < n ; i++)
		result+=str;
	
	return result;
}

int main()
{
	MyPair x(1,2);
	MyPair y(3,4);
	cin >> x >> y;

	x.print();
	y.print();

	return 0;
}
