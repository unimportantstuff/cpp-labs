#include <iostream>

using namespace std;

float total_price(float price, float percentage) {
    return price + (price * (percentage / 100));
}

int main() {
    float price, percentage;
    cout << "\nEnter the price (pounds): ";
    cin >> price;
    cout << "\nEnter the tipe percentage: ";
    cin >> percentage;
    cout << "\nThe total amount to pay is: " << total_price(price, percentage);
}