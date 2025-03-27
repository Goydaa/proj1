#include "Product.h"

Product::Product(const std::string& productName, double productPrice, int productQuantity, double productMinPrice)
    : name(productName), price(productPrice), quantity(productQuantity), minPrice(productMinPrice) {}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

int Product::getQuantity() const {
    return quantity;
}

double Product::getMinPrice() const {
    return minPrice;
}

bool Product::isAffordable(double money) const {
    return money >= minPrice && money >= price;
}

void Product::reduceQuantity(int amount) {
    quantity -= amount;
}

