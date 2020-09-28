#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    string message;
    if (x < y && y < z)
        message = "In order, ascending";
    else if (y > z && x > y)
        message = "In order, descending";
    else
        message = "Not in order";

    cout << message << "\n";
}