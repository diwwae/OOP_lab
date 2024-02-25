#pragma once

#include "IFigureValidator.h"
#include "RectangleValidator.h"
#include "TrapezoidValidator.h"
#include "SquareValidator.h"

class FigureValidator{
private:
    static std::vector<IFigureValidator*> _validators;
public:
    static void validate(const std::type_info &, std::vector<Point>);
};