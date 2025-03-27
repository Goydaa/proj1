#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Store.h"

class Customer {
private:
    std::string name;
    double money;

public:
    Customer(const std::string& customerName, double initialMoney);
    std::string getName() const;
    double getMoney() const;
    void purchase(Store& store, const std::string& productName, int quantity);
};

#endif
