#include "trapezoid.h"

Trapezoid::Trapezoid(double a, double b, double h) : baseA(a), baseB(b), height(h) {
}

double Trapezoid::getArea() const {
    return 0.5 * (baseA + baseB) * height;
}

double Trapezoid::getPerimeter() const {
    return baseA + baseB;
}