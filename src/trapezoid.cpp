#include "trapezoid.h"

Trapezoid::Trapezoid(double a, double b, double h) : baseA(a), baseB(b), height(h) {
    if (a <= 0 || b <= 0 || h <= 0) {
        throw std::invalid_argument("Основания и высота трапеции должны быть положительными.");
    }
}

double Trapezoid::getArea() const {
    return 0.5 * (baseA + baseB) * height;
}

double Trapezoid::getPerimeter() const {
    return baseA + baseB;
}