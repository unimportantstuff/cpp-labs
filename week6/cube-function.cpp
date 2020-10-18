#include <iostream>

int cube(int num) {
    return num * num * num;
}

/* tiny demo to show the usage of `cube` */
int main() {
    int input;

    std::cout << "Enter a number to get it's cube: ";
    std::cin >> input;

    std::cout << "The cube of " << input << " is " << cube(input) << std::endl;
}