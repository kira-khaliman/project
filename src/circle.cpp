#include "circle.hpp"
#include <cmath>
#include <iostream>

Circle::Circle(double r): radius(r){
	if (radius < 0){
		std::cout << "Ошибка. Отрицательного радиуса не существует" << std::endl;
		radius = 0;
	}
}

double Circle::getArea() const{
	return M_PI * radius * radius;
}

double Circle::getCircumference() const{
	return 2 * M_PI * radius;
}

double Circle::getRadius() const{
	return radius;
}

void Circle::setRadius(double r){
	if (r >= 0){
		radius = r;
	}
	else{
		std::cerr << "Ошибка. Отрицательного радиуса не существует" << std::endl;
	}
}