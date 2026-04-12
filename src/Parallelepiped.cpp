#include "IFigure3D.h"
#include "Parallelepiped.h"

parallelepiped::parallelepiped(float length, float width, float height){
    this->height = height;
    this->length = length;
    this->width = width;
}
float parallelepiped::square() override {
    return 2 * (length * width + length * height + width * height);
}
float parallelepiped::volume() override {
    return length * width * height;
}
