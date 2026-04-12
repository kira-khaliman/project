#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double a, b;

public:
    Rectangle(double a, double b);
    double getArea() const;
    double getPerimeter() const;
};

#endif