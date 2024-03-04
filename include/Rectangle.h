#pragma once

#include "Figure.h"

template<class T>
class Rectangle : public Figure<T>{
public:
    Rectangle();
    Rectangle(std::vector<Point<T>>);

    // void setPeaks(std::vector<Point>);
    // void getPeaks(std::vector<Point>);
    T calculateSquare();

    Figure<T> &operator=(Figure<T> other) override;

    ~Rectangle() = default;
};