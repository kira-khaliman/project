#include "trapezoid.h"
#include <cmath>

Trapezoid::Trapezoid(double a, double b, double h) : baseA(a), baseB(b), height(h) {
}

double Trapezoid::getArea() const {
    return 0.5 * (baseA + baseB) * height;
}

double Trapezoid::getPerimeter() const {
    double longerB = std::max(baseA, baseB);
    double shorterB = std::min(baseA, baseB);
    double projection = (longerB - shorterB) / 2.0;
    double side = std::sqrt(height * height + projection * projection);
    return longerB + shorterB + 2.0 * side;
}