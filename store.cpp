#include "Store.h"

Store::Store(const std::string& name) : name(name) {}

std::string Store::getName() const {
    return name;
}

void Store::addProduct(const Product& product) {
    products.push_back(product);
}

bool Store::purchaseProduct(const std::string& productName, int quantity) {
    for (auto& product : products) {
        if (product.getName() == productName && product.getQuantity() >= quantity) {
            product.setQuantity(product.getQuantity() - quantity);
            return true;
        }
    }
    return false;
}

double Store::findPrice(const std::string& productName) const {
    for (const auto& product : products) {
        if (product.getName() == productName) {
            return product.getPrice();
        }
    }
    return -1; 
}

