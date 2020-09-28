#include <iostream>

int getSum(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }
    return sum;
}

using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = getSum(a, b);
    cout << "Sum from "
         << a << " to "
         << b << " is "
         << sum << "\n";
}