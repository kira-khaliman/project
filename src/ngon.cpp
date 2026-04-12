#include "ngon.h"

NGon::NGon(int n, double side) : n(n), side(side) {
    if (n < 3 || side <= 0) {
        throw std::invalid_argument("Число сторон n должно быть ≥ 3, длина стороны > 0.");
    }
}

double NGon::getArea() const {
    return (n * pow(side, 2)) / (4 * tan(M_PI / n));
}

double NGon::getPerimeter() const {
    return n * side;
}