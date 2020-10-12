#include <iostream>

using namespace std;

float total_price(float price, float percentage) {
    return price + (price * (percentage / 100));
}

int main() {
    float price, percentage;
    cout << "\nEnter the price (pounds): ";
    cin >> price;
    cout << "\nEnter the tip percentage: ";
    cin >> percentage;
    cout << "\nThe total amount to pay is: \x9C" << total_price(price, percentage);
}