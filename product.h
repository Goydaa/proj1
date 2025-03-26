#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string name;
    double price;
    int quantity;

public:
    Product(const std::string& name, double price, int quantity);

    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;

    void setPrice(double newPrice);
    void setQuantity(int newQuantity);
};

#endif // PRODUCT_H

