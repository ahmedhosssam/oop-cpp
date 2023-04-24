#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>
#include "../Product/Product.h"
using namespace std;

class Stock {
  private:
    int id;
    Product productList[50];
    static int count;

  public:
    Stock();
    int getQuantity();
    void addProduct();
    void updateProduct();
    void deleteProduct();
    void showAllProducts();
    void clearScreen();
};

#endif