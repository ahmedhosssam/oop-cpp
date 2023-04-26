#include <iostream>
#include <string>
#include <cstdlib> // for system() function

#include "./Stock/Stock.h"
#include "./Product/Product.h"
#include "./Customers/Customers.h"
#include "Customer/Customer.h"
using namespace std;

void clearScreen()
{
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}

int main()
{
	Stock s1;
	Customers c1;

	do
	{
		int option;
		cout << "Choose one of the following options :\n";
		cout << "1 : Data Entry ( Customer / Products in Stock )\n";
		cout << "2 : Sales Process ( Add Transaction / Update Order / Pay Order )\n";
		cout << "3 : Get Reports\n";
		cout << "==> "; cin >> option;

		// option 1 ==> Data entry
		if (option == 1)
		{
			clearScreen();
			cout << "1 : Customer\n2 : Products in Stock\n";
			cout << "==> "; cin >> option;
			if (option == 1)	// Customers
			{
				clearScreen();
				cout << "1 : Add Customer\n2 : Update Customer\n3 : Delete Customer\n";
				cout << "==> "; cin >> option;
				switch (option)
				{
				case 1:
					c1.addCustomer();
					break;
				case 2:
					c1.editCutomer();
					break;	
				case 3:
					s1.deleteProduct();
					break;
				default:
					break;
				}
			} else if (option == 2)	// Products in stock
			{
				clearScreen();
				cout << "1 : Add Product\n2 : Update Product\n3 : Delete Product\n";
				cout << "==> "; cin >> option;
				switch (option)
				{
				case 1:
					s1.addProduct();
					break;
				case 2:
					s1.updateProduct();
					break;	
				case 3:
					s1.deleteProduct();
					break;
				default:
					break;
				}
			} else { clearScreen(); }
		}
		// option 2 ==> Sales Process
		else if ( option == 2 )
		{
			clearScreen();
			cout << "1 : Add Transaction\n2 : Update Order\n3 : Pay Order\n";
			cout << "==> "; cin >> option;
		}
		//  option 3 ==> Get Reports
		else if ( option == 3 )
		{
			clearScreen();
			cout << "1 : Customers Report \n2 : Stock Report\n3 : Transactions History\n";
			cout << "==> "; cin >> option;
			switch (option)
			{
			case 1:
				c1.showAllCustomers();
				break;
			case 2:
				s1.showAllProducts();
				break;
			case 3:
				break;
			default:
				break;
			}
		} else { clearScreen(); }

	} while (true);

	return 0;
}
