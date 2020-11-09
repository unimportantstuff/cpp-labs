#pragma once

#include "Shape.h"

class Square : public Shape {
    double width;

   public:
    Square(double);
    double area();
};

class Rectangle : public Shape {
    double width;
    double height;

   public:
    Rectangle(double, double);
    double area();
};

class Circle : public Shape {
    double radius;

   public:
    Circle(double);
    double area();
};