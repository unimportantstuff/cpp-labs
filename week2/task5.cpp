#include <iostream>
#include <string>

using namespace std;

string format_phone_number(string number) {
    return "(" + number.substr(0, 3) + ") " + number.substr(3, 4) + " " + number.substr(7, 4);
}

int main() {
    string number;
    cout << "\nEnter the phone number: ";
    cin >> number;
    cout << "\nThe formatted phone number is: " << format_phone_number(number) << endl;
}