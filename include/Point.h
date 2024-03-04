#pragma once

#include <iostream>

template<class T>
class Point{
private:
    T _x;
    T _y;
public:
    Point();
    Point(T, T);

    Point<T>& operator=(Point<T> right);
    Point<T>& operator+(Point<T> &right);
    Point<T>& operator-(Point<T> &right);
    bool operator==(Point<T> const &right) const;
    friend std::ostream &operator<<(std::ostream &out, const Point<T> &point);
    friend std::istream &operator>>(std::istream &is, Point<T> &point);

    T getX();
    T getY();

    ~Point() = default;

};