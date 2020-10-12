#include <iostream>

using namespace std;

float mean(float num1, float num2) {
    return (num1 + num2) / 2;
}

float distance(float num1, float num2) {
    return num1 > num2
               ? abs(num1) - abs(num2)
               : abs(num2) - abs(num1);
}

int main() {
    float x, y;
    cout << "Please enter two numbers: ";
    cin >> x >> y;
    cout << "\nThe sum of " << x << " and " << y << " is " << x + y << endl;
    cout << "The difference between " << x << " and " << y << " is " << x - y << endl;
    cout << "The product of " << x << " and " << y << " is " << x * y << endl;
    cout << "The distance between " << x << " and " << y << " is " << distance(x, y) << endl;
    cout << "The mean average of " << x << " and " << y << " is " << mean(x, y) << endl;
}