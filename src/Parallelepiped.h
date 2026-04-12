#pragma once
#include "IFigure3D.h"
class parallelepiped : public IFigure3D {
private:
    float length;  // длина
    float width;   // ширина
    float height;  // высота
public:
    parallelepiped(float length, float width, float height);
    float square() override;
    float volume() override;
};