#pragma once

#include "Figure.h"

class Rectangle : public Figure{
public:
    Rectangle();
    Rectangle(std::vector<Point>);

    // void setPeaks(std::vector<Point>);
    // void getPeaks(std::vector<Point>);
    double calculateSquare();

    Figure &operator=(Figure other) override;

    ~Rectangle() = default;
};