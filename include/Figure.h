#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

template<class T>
class Figure{
protected:
    std::vector<Point<T>> _peaks;
public:
    Figure();
    Figure(std::vector<Point<T>> _peaks);

    virtual Point<T> calculateCenter();
    // virtual double calculateSquare();
    virtual std::vector<Point<T>> getPeaks();
    // virtual std::vector<Point> setPeaks();

    virtual Figure<T> &operator=(Figure<T> other);
    Figure(Figure<T> &&) noexcept;
    Figure(const Figure<T> &) noexcept;
    bool operator==(Figure<T> &other);

    ~Figure() = default;
};