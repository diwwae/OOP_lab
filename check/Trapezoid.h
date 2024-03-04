#pragma once

#include "Figure.h"

class Trapezoid : public Figure {
public:
    Trapezoid();
    Trapezoid(std::vector<Point>);

    Figure& operator=(Figure right) override;

    // void setPeaks(Vector<Point>) override;

    double calculateSquare();
    // Point calculateCenter() override;
    static Trapezoid &createFromPoints(std::vector<Point>);

    ~Trapezoid() = default;
};