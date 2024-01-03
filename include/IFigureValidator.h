#pragma once
#include "iostream"
#include "Vector.h"
#include "Point.h"

class IFigureValidator{
public:
    virtual void validateFigure(Vector<Point> peaks) = 0;

    virtual bool isAllowedForType(const std::type_info& typeInfo) = 0;
};