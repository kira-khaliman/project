#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}

double Rectangle::getArea() const {
    return a * b;
}

double Rectangle::getPerimeter() const {
    return 2 * (a + b);
}