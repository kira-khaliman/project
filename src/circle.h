#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
class Circle {
private:
	double radius;
public:
	explicit Circle(double r);
	double getArea() const;
	double getCircumference() const;
	double getRadius() const;
	void setRadius(double r);
};
#endif