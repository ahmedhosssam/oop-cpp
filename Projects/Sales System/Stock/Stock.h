#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>

class Stock {
  private:
    int id;
    int count;

  public:
    void addStock(int product_id, int quantity);
    void updateStock(int product_id, int quantity);
    void deleteProduct(int product_id);
    int getQuantity(int product_id);
};

#endif