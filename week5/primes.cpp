#include <iostream>

bool isPrime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Primes to " << num << " are: ";
    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) cout << i << " ";
    }
}