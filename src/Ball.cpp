#include "IFigure3D.h"
#include "Ball.h"
Ball::Ball(float radius) {
	this->radius = radius;
}
float Ball::square() override {
    return 4 * 3.14 * (radius * radius);
}
float Ball::volume() override {
    return (4 / 3) * 3.14 * (radius * radius * radius);
}