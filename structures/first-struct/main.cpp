#include <iostream>
using namespace std;

struct part {
  int modelnumber; //ID number of widget
  int partnumber; // ID number of widget part
  float cost; //cost of part
};

int main() {
  part part1; // instance of the structure " part "

  part1.modelnumber = 6244;
  part1.partnumber = 373;
  part1.cost =  217.55F;

  cout << "Model : " << part1.modelnumber << endl;
  cout << "Part : " << part1.partnumber << endl;
  cout << "Costs = " << part1.cost << endl;
  cout << "First c++ line from 'pure' vim code editor" << endl;

  return 0;  
}
