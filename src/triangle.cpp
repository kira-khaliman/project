#include "triangle.h"
#include <cmath> 
Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

bool Triangle::isValid() const {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double Triangle::getArea() const {
    double p = getPerimeter() / 2.0; 
    return sqrt(p * (p - a) * (p - b) * (p - c)); 
}

double Triangle::getPerimeter() const {
    return a + b + c;
}