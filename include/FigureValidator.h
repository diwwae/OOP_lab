#pragma once

#include "IFigureValidator.h"
#include "RectangleValidator.h"
#include "TrapezoidValidator.h"
#include "SquareValidator.h"

template<class T>
class FigureValidator{
private:
    static std::vector<IFigureValidator<T>> _validators;
public:
    static void validate(const std::type_info &, std::vector<Point<T>>);
};