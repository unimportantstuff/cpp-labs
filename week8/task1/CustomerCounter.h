#pragma once

class CustomerCounter {
    int maximum_customers;
    int customer_count;

   public:
    CustomerCounter(int);
    void add(int);
    void subtract(int);
    void print();
};