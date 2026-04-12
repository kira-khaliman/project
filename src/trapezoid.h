#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid {
private:
    double baseA, baseB, height;
public:
    Trapezoid(double a, double b, double h);
    double getArea() const;
    double getPerimeter() const;
};

#endif