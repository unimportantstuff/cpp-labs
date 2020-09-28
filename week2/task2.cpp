#include <iostream>

using namespace std;

void add_two_nums() {
    int x, y;
    cout << "Please enter two numbers:";
    cin >> x >> y;
    cout << "The sum of "
         << x << " and "
         << y << " is: "
         << x + y
         << std::endl;
}