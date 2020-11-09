#include <iostream>

#include "Person.h"

int main() {
    Person john = Person("John");
    Person bob = Person("Bob");
    Person fin = Person("Fin");

    std::cout << "Initial people: \n\n";
    john.print();
    bob.print();
    fin.print();

    john.befriend(&bob);
    john.befriend(&fin);
    bob.befriend(&fin);
    fin.befriend(&john);

    std::cout << "After befriending: \n\n";
    john.print();
    bob.print();
    fin.print();

    std::cout << "After unfriending Bob from John: \n\n";
    john.unfriend(&bob);
    john.print();
}