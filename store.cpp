#include "Store.h"

Store::Store(std::string name) : name(name) {}

void Store::addProduct(const Product& product) {
    products.push_back(product);
}

Product* Store::findProduct(const std::string& productName) {
    for (auto& product : products) {
        if (product.getName() == productName) {
            return &product;
        }
    }
    return nullptr;
}

