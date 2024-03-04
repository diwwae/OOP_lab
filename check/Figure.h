#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

class Figure{
protected:
    std::vector<Point> _peaks;
public:
    Figure();
    Figure(std::vector<Point> _peaks);

    virtual Point calculateCenter();
    // virtual double calculateSquare();
    virtual std::vector<Point> getPeaks();
    // virtual std::vector<Point> setPeaks();

    virtual Figure &operator=(Figure other);
    Figure(Figure &&) noexcept;
    Figure(const Figure &) noexcept;
    bool operator==(Figure &other);

    ~Figure() = default;
};