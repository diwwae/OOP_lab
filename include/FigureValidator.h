#pragma once
#include "IFigureValidator.h"
#include "RectangleValidator.h"
#include "TrapezoidValidator.h"

class FigureValidator{
    static Vector<IFigureValidator*> _validators;

public:
    static void Validate(const std::type_info &, Vector<Point>);
};