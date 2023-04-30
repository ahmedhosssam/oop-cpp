#include <iostream>
#include <string>
using namespace std;

class Printer
{
	private:
		string name;
		int avPaper;
	public:
		Printer(string name, int paper) {
			name = name;
			avPaper = paper;
		}
	
	void print(string txtDoc) {
		int reqPapers = txtDoc.length() / 10; // i.e 40/10 = 4
		if(reqPapers > avPaper)
			throw "Error 69: Not enough papers";

		cout << "Printing...\n" << txtDoc << endl;
		avPaper -= reqPapers;
	}
};

int main()
{
	try {
		Printer myPrinter("HP Deskjet 1234", 4);
		myPrinter.print("Hello I a m ahmed hossam , i'm a software engineer and fuck you alll");
	} catch (const char* txtException) {
		cout << txtException << endl;
	}
	return 0;
}
