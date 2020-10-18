#include <iostream>

bool isPrime(int num) {
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0) return false;

    return true;
}

int main() {
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "Primes to " << num << " are: ";
    for (int i = 2; i <= num; i++)
        if (isPrime(i)) std::cout << i << " ";
    std::cout << std::endl;
}