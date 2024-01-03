#pragma once
#include "IFigureValidator.h"
class TrapezoidValidator : public IFigureValidator{
public:
    void validateFigure(Vector<Point> peaks) override;

    bool isAllowedForType(const std::type_info &typeInfo) override;

    ~TrapezoidValidator() = default;
};