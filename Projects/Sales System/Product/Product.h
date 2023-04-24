#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
  private:
    int id;
    string number;
    string name;
    double price;
    int type;

  public:
    void update();

}

#endif