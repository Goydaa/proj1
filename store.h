#ifndef STORE_H
#define STORE_H

#include <vector>
#include <string>
#include "Product.h"

class Store {
private:
    std::string name;
    std::vector<Product> products;

public:
    Store(const std::string& storeName);
    void addProduct(const Product& product);
    Product* findProduct(const std::string& productName);
};

#endif
