#pragma once
#include "IFigure3D.h"
class Ball : public IFigure3D {
private:
    float radius
public:
    Ball(float radius);
    float square() override;
    float volume() override;
};