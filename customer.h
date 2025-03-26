#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Store.h"

class Customer {
private:
    std::string name;
    double balance;

public:
    Customer(const std::string& name, double balance);

    std::string getName() const;
    double getBalance() const;
    void purchase(Store& store, const std::string& productName, int quantity);
};

#endif // CUSTOMER_H

