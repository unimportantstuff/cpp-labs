#include "CustomerCounter.h"

#include <iostream>

CustomerCounter::CustomerCounter(int maximum) {
    this->customer_count = 0;
    this->maximum_customers = maximum;
};

void CustomerCounter::add(int num) {
    if (this->customer_count + num > this->maximum_customers)
        this->customer_count = this->maximum_customers;
    else
        this->customer_count += num;
}

void CustomerCounter::subtract(int num) {
    if (this->customer_count - num < 0)
        this->customer_count = 0;
    else
        this->customer_count -= num;
}

void CustomerCounter::print() {
    std::cout << "[CustomerCounter]\n\n\tCustomer Count: "
              << this->customer_count
              << "\n\tMaximum Customers: "
              << this->maximum_customers
              << "\n"
              << std::endl;
}