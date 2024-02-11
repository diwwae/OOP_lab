#pragma once

#include "IFigureValidator.h"

class RectangleValidator : public IFigureValidator {
public:
    void validateFigure(std::vector<Point> peaks) override;

    bool isAllowedForType(const std::type_info& typeInfo) override;

    ~RectangleValidator() = default;
};