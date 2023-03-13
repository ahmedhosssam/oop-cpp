#include <iostream>
using namespace std;

class part
{
	private:
		int modelnumber;
		int partnumber;
		float cost;

	public:
		void setpart(int mn, int pn, float c)
			{
			modelnumber = mn;
			partnumber = pn;
			cost = c;
			}

		void getpart()
			{
			cout << "Model : " << modelnumber;
			cout << " , Part : " << partnumber;
			cout << " , cost : $" << cost << endl;
			}
};

int main()
{

	part part1;
	
	part1.setpart(6244, 373, 217.55F);
	part1.getpart();

	return 0;
}
