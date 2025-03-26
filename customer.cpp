#include "Customer.h"
#include <iostream>

Customer::Customer(const std::string& name, double balance)
    : name(name), balance(balance) {
}

std::string Customer::getName() const {
    return name;
}

double Customer::getBalance() const {
    return balance;
}

void Customer::purchase(Store& store, const std::string& productName, int quantity) {
    double price = store.findPrice(productName);
    if (price == -1) {
        std::cout << "Товар не найден!" << std::endl;
        return;
    }

    double totalCost = price * quantity;
    if (balance >= totalCost && store.purchaseProduct(productName, quantity)) {
        balance -= totalCost;
        std::cout << name << " купил " << quantity << " шт. " << productName << " за " << totalCost << " руб.\n ";
    }
    else {
        std::cout << " Недостаточно средств или товар в недоступном количестве " << std::endl;
    }
}

