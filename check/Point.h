#pragma once

#include <iostream>

class Point{
private:
    double _x;
    double _y;
public:
    Point();
    Point(double, double);

    Point& operator=(Point right);
    Point& operator+(Point &right);
    Point& operator-(Point &right);
    bool operator==(Point const &right) const;
    friend std::ostream &operator<<(std::ostream &out, const Point &point);
    friend std::istream &operator>>(std::istream &is, Point &point);

    double getX();
    double getY();

    ~Point() = default;

};