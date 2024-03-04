#pragma once

#include "Figure.h"

class Square : public Figure {
public:
    Square();
    Square(std::vector<Point>);

    double calculateSquare();

    Figure &operator=(Figure other) override;

    ~Square() = default;
};