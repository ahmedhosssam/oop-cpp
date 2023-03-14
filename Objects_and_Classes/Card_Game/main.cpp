#include <iostream>
using namespace std;

enum Suit { clubs , diamonds , hearts , spades };

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card {
  private:
    int number;
    Suit suit;
  
  public:
    card() { }
    card (int n , Suit s) { }

    void display();
    bool isEqual(card);
};

void card::display()
{
  if(number >= 2 && number <= 10)
    cout << number << " of ";
  else
    switch (number)
    {
    case jack: cout << "jack of "; break;
    case queen: cout << "queen of "; break;
    case king: cout << "king of "; break;
    case ace: cout << "ace of "; break;
    }
  
  switch (suit)
    {
    case clubs: cout << "clubs"; break;
    case diamonds: cout << "diamonds"; break;
    case hearts: cout << "hearts"; break;
    case spades: cout << "spades"; break;
    }
}

bool card::isEqual(card c2)
{
  return ( number == c2.number && suit == c2.suit ) ? true : false;
}

int main ()
{
  return 0;
}