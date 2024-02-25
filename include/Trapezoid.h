#pragma once

#include "Figure.h"

template<class T>
class Trapezoid : public Figure<T> {
public:
    Trapezoid();
    Trapezoid(std::vector<Point<T>>);

    Figure<T>& operator=(Figure<T> right) override;

    // void setPeaks(Vector<Point>) override;

    T calculateSquare();
    static Trapezoid &createFromPoints(std::vector<Point<T>>);

    ~Trapezoid() = default;
};