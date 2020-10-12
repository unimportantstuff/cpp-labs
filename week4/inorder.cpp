#include <iostream>
#include <string>

int main() {
    int x, y, z;

    std::cout << "Enter three integers: ";
    std::cin >> x >> y >> z;

    std::string message;

    if (x < y && y < z)
        message = "In order, ascending";
    else if (y > z && x > y)
        message = "In order, descending";
    else
        message = "Not in order";

    std::cout << message << std::endl;
}