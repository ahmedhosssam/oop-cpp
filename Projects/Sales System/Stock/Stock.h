#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>

class Stock {
  private:
    int id;
    int count;

  public:
    void addProduct(int product_id, int quantity);
    void updateProduct(int product_id, int quantity);
    void deleteProduct(int product_id);
    int getQuantity(int product_id);
};

#endif