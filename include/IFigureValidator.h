#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

template<class T>
class IFigureValidator{
public:
    virtual void validateFigure(std::vector<Point<T>> peaks) = 0;

    virtual bool isAllowedForType(const std::type_info& typeInfo) = 0;
};