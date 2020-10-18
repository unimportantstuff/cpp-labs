#include <iostream>

int getSum(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = getSum(a, b);
    std::cout << "Sum from "
              << a << " to "
              << b << " is "
              << sum << std::endl;
}