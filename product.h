#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string name;
    double price;
    int quantity;
    double minPrice; // Минимальная цена для продукта

public:
    Product(const std::string& productName, double productPrice, int productQuantity, double productMinPrice = 0.0);
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    double getMinPrice() const;
    bool isAffordable(double money) const;
    void reduceQuantity(int amount);
};

#endif
