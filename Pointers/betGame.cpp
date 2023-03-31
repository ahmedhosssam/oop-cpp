#include <iostream>
#include <cstdlib>

using namespace std;
int cash = 100;

void Play ( int bet )
{
	char C[3] = { "J" , "Q" , "K" };
	cout << "Shuffling ...\n";
	srand(time(NULL)); // seeding random number generator
	
	// to shuffle C array
	for ( int i = 0 ; i < 5 ; i++ )
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp;
		C[y] = temp;	// swaps characters at position x and y
	}

	int playerGuess;
	cout << "What's the position of the queen ? 1 , 2 , 3 : ";
	cin >> playerGuess;

	if ( C[playerGuess - 1] == "Q" )
	{
		cash += 3*bet;
		cout << "You won !! Result = " << C[0] << " , " << C[1] << " , " << C[2] << " , Total Cash = " << cash << endl;

	} else {

		cash -= bet;
		cout << "You won !! Result = " << C[0] << " , " << C[1] << " , " << C[2] << " , Total Cash = " << cash << endl;

	}

}

int main()
{
	Play(10);

	return 0;
}
