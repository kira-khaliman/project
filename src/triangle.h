#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double a, double b, double c);
    bool isValid() const; 
    double getArea() const; 
    double getPerimeter() const; 
};

#endif