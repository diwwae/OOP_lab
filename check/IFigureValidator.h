#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

class IFigureValidator{
public:
    virtual void validateFigure(std::vector<Point> peaks) = 0;

    virtual bool isAllowedForType(const std::type_info& typeInfo) = 0;
};