#include <iostream>
#include <string>

#include "Product.h"

using namespace std;

Product::Product() {}

Product::Product(string name, double price, int id)
{
  this->name = name;
  this->price = price;
  this->id = id;
}

void Product::update()
{
  string newName;
  double newPrice;
};

void Product::getDetails()
{
  cout << "Name : " << name << endl;
  cout << "Price : $" << price << endl;
  cout << "Id : " << id << endl;
}

void Product::setDetails()
{
  cout << "Name : "; cin >> name;
  cout << "Price : $"; cin >> price;
}