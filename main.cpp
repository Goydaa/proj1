#include "Customer.h"
#include <iostream>

int main() {
    Store store("TechStore");
    store.addProduct(Product("Laptop", 50000, 5));
    store.addProduct(Product("Smartphone", 30000, 10));

    Customer customer("Ivan", 60000);
    customer.purchase(store, "Laptop", 1);
    customer.purchase(store, "Smartphone", 2);
    customer.purchase(store, "Laptop", 5);

    return 0;
}

