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
        std::cout << "����� �� ������!" << std::endl;
        return;
    }

    double totalCost = price * quantity;
    if (balance >= totalCost && store.purchaseProduct(productName, quantity)) {
        balance -= totalCost;
        std::cout << name << " ����� " << quantity << " ��. " << productName << " �� " << totalCost << " ���.\n";
    }
    else {
        std::cout << "������������ ������� ��� ������ � �������!" << std::endl;
    }
}

