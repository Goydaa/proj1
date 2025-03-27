#include "Customer.h"
#include <iostream>

int main() {
    // Создание магазина
    Store store("TechStore");
    store.addProduct(Product("Laptop", 50000, 5, 50000));  
    store.addProduct(Product("Smartphone", 30000, 10, 35000)); 
    store.addProduct(Product("Tablet", 15000, 8, 15000));  
    store.addProduct(Product("Bananas", 50, 100, 50));  

    // Создание клиента
    Customer customer("Ivan", 60000);

    // Покупки
    customer.purchase(store, "Laptop", 1);
    customer.purchase(store, "Smartphone", 2);
    customer.purchase(store, "Laptop", 5);  
    customer.purchase(store, "Bananas", 30);  

    return 0;
}
