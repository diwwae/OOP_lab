#pragma once

#include "IFigureValidator.h"

template<class T>
class RectangleValidator : public IFigureValidator<T> {
public:
    void validateFigure(std::vector<Point<T>> peaks) override;

    bool isAllowedForType(const std::type_info& typeInfo) override;

    ~RectangleValidator() = default;
};