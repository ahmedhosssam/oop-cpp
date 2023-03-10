#include <iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0) // Constructor for " NO ARGS "
			{  }

		Distance(int ft, float in) : feet(ft) , inches(in) // Constructor for "TWO ARGS"
			{  }

		void enterdist()
			{
			cout << "Enter feet : "; cin >> feet;
			cout << "Enter inches: "; cin >> inches;
			}
		void getdist()
		{
			cout << feet << "\'" << inches << '\"' << endl;
		}
		void add_dist( Distance , Distance ); // Decalration
};

void Distance::add_dist( Distance first , Distance second ) // the args are " objects "
{
	inches = first.inches + second.inches;
	feet = 0;

	if (inches >= 12.0)
		{
		inches -= 12.0;
		feet++;
		}
	feet += first.feet + second.feet;
}

int main()
{
	Distance dist1, dist3;
	Distance dist2(11, 6.25);  // define and initialize dist2

	dist1.enterdist();
	dist3.add_dist(dist1, dist2);

	cout << "dist1 : "; dist1.getdist();
	cout << "dist2 : "; dist2.getdist();
	cout << "dist3 : "; dist3.getdist();

	return 0;
}
