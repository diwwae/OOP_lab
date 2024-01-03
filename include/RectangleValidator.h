#pragma once
#include "IFigureValidator.h"
#include "ParalellogramValidator.h"
class RectangleValidator : public ParalellogramValidator {
public:
    void validateFigure(Vector<Point> peaks) override;

    bool isAllowedForType(const std::type_info& typeInfo) override;

    ~RectangleValidator() = default;
};