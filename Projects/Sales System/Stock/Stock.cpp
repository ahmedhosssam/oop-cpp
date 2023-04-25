#include <iostream>
#include <string>
#include <cstdlib> // for system() function
#include <chrono> // for sleep() function
#include <thread> // for sleep() function

#include "Stock.h"
#include "../Product/Product.h"
using namespace std;

int Stock::count = 0;

Stock::Stock() {}

void Stock::addProduct(){
  clearScreen();
  string name;
  double price;
  cout << "Name : "; cin >> name;
  cout << "Price : $"; cin >> price;
  Product newProduct(name, price, count);
  productList[count] = newProduct;
  count++;
  clearScreen();
}

void Stock::updateProduct() {
  clearScreen();
  if(count < 1) { return; }
  int option;
  cout << "Enter product ID : "; cin >> option;
  productList[option].setDetails();
}


int Stock::getQuantity() 
{
  return count;
}

void Stock::showAllProducts()
{
  clearScreen();
  for(int i = 0 ; i < count ; i++) {
    productList[i].getDetails();
    cout << "<------>\n";
  }
}

void Stock::deleteProduct() {
  clearScreen();
  int option;
  cout << "Enter the ID of the product : "; cin >> option;

  for(int i = option ; i < count-1 ; i++) {
    productList[i] = productList[i+1];
  }
  count--;
}

void Stock::clearScreen()
{
  system("cls"); // clear the screen for windows
  system("clear"); // clear the screen for linux/MacOS
}