#include "ngon.h"

NGon::NGon(int n, double side) : n(n), side(side) {

}

double NGon::getArea() const {
    return (n * pow(side, 2)) / (4 * tan(M_PI / n));
}

double NGon::getPerimeter() const {
    return n * side;
}