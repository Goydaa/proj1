#include "Store.h"

Store::Store(const std::string& storeName) : name(storeName) {}

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
