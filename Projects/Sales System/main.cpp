#include <iostream>
#include <string>
using namespace std;

#include "./Stock/Stock.h"
#include "./Product/Product.h"

int main()
{
	Stock s1;
	int countdown = 69;
	do
	{
		int option;
		cout << "Hello!!\n\n";
		cout << "Choose one of the following options :\n";
		cout << "1 : Show all products\n2 : Add a new product\n3: Update product\n";
		cout << "==> "; cin >> option;

		switch (option)
		{
		case 1:
			s1.showAllProducts();
			break;
		case 2:
			s1.addProduct();
			break;	
		case 3:
			s1.updateProduct();
		default:
			break;

		}
		countdown--;
	} while (countdown > 0);
	

	return 0;
}
