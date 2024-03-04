#pragma once

#include "Figure.h"

template<class T>
class Square : public Figure<T> {
public:
    Square();
    Square(std::vector<Point<T>>);

    T calculateSquare();

    Figure<T> &operator=(Figure<T> other) override;

    ~Square() = default;
};