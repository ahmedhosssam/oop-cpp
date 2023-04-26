#include <iostream>
#include <string>
using namespace std;

#include "./Stock/Stock.h"
#include "./Product/Product.h"
#include "./Customers/Customers.h"
#include "Customer/Customer.h"

int main()
{
	Stock s1;
	Customers c1;
	int countdown = 69;
	do
	{
		int option;
		cout << "Choose one of the following options :\n";
		cout << "1 : Show all products\n2 : Add a new Product\n3 : Update Product\n4 : Delete Product\n";
		cout << "<------->\n";
		cout << "5 : Add Customer\n6 : Show All Customers\n7 : Edit Customer\n";
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
			break;
		case 4:
			s1.deleteProduct();
			break;
		case 5:
			c1.addCustomer();
			break;
		case 6:
			c1.showAllCustomers();
		case 7:
			c1.editCutomer();
		default:
			break;
		}
		countdown--;
	} while (countdown > 0);

	return 0;
}
