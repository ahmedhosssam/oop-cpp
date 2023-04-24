#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product {
  private:
    int id;
    string name;
    double price;

  public:
    Product();
    Product(string name, double price, int id);
    void update();
    void getDetails();
    void setDetails();
};

#endif