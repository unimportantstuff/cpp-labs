#include "Shapes.h"

#define PI 3.14

Square::Square(double width) : width(width){};
double Square::area() {
    return this->width * this->width;
};

Rectangle::Rectangle(double width, double height) : width(width), height(height){};
double Rectangle::area() {
    return this->width * this->height;
}

Circle::Circle(double radius) : radius(radius){};
double Circle::area() {
    return PI * (this->radius * this->radius);
}