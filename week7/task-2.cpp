#include <iostream>

int main() {
    double var = 2.4;
    double* pointer_to_var = &var;

    std::cout << "Variable value: "
              << var
              << "; address "
              << &var
              << "\nPointer value: "
              << pointer_to_var
              << "; address: "
              << &pointer_to_var
              << "; dereference: "
              << *pointer_to_var;
}