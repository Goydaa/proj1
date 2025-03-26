#ifndef STORE_H
#define STORE_H

#include "Product.h"
#include <vector>
#include <string>

class Store {
private:
    std::string name;
    std::vector<Product> products;

public:
    Store(const std::string& name);

    std::string getName() const;
    void addProduct(const Product& product);
    bool purchaseProduct(const std::string& productName, int quantity);
    double findPrice(const std::string& productName) const;
};

#endif // STORE_H

