#include <iostream>

#include "CustomerCounter.h"

int main() {
    auto cc = CustomerCounter(20);
    std::cout << "Initial counter: \n";
    cc.print();
    std::cout << "After adding 15: \n";
    cc.add(15);
    cc.print();
    std::cout << "After adding 10 more: \n";
    cc.add(10);
    cc.print();
    std::cout << "After subtracting 5: \n";
    cc.subtract(5);
    cc.print();
}