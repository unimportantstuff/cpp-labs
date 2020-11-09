#include <iostream>
#include <vector>

#include "Shapes.h"

int main() {
    Square s1 = Square(1);
    Square s2 = Square(24);

    Circle c1 = Circle(32.4);
    Circle c2 = Circle(14);

    Rectangle r1 = Rectangle(12, 34);
    Rectangle r2 = Rectangle(459.2, 98.653);

    std::vector<Shape*> shapes = {&s1, &s2, &c1, &c2, &r1, &r2};

    for (auto shape : shapes) {
        std::cout << "[Shape]\n"
                  << "\n\tArea: " << shape->area() << "\n"
                  << std::endl;
    }
}