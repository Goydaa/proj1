#include "Customer.h"
#include <iostream>

Customer::Customer(const std::string& customerName, double initialMoney)
    : name(customerName), money(initialMoney) {}

std::string Customer::getName() const {
    return name;
}

double Customer::getMoney() const {
    return money;
}

void Customer::purchase(Store& store, const std::string& productName, int quantity) {
    Product* product = store.findProduct(productName);
    if (product && product->getQuantity() >= quantity) {
        double totalPrice = product->getPrice() * quantity;
        if (product->isAffordable(money)) {
            product->reduceQuantity(quantity);
            money -= totalPrice;
            std::cout << name << " купил " << quantity << " " << productName
                      << "(ов) за " << totalPrice << " рублей. Остаток на счету: " << money << " рублей.\n";
        } else {
            std::cout << "Недостаточно денег для покупки " << quantity << " " << productName << "(ов).\n";
        }
    } else {
        std::cout << "Товар не найден или недостаточно количества " << productName << ".\n";
    }
}
