//
// Created by meteo on 29.11.2023.
//
#include "Point.h"

Point::Point() = default;

Point::Point(double x, double y) {
    _x = x;
    _y = y;
}

Point Point::operator+(Point &right) const {
    return *(new Point((this->_x + right._x), (this->_y + right._y)));
}

Point &Point::operator=(Point const &right) {
    this->_x = right._x;
    this->_y = right._y;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Point &point) {
    out << "x: " << point._x << "; y: " << point._y;
    return out;
}

Point &Point::operator-(const Point &right) const {
    return *(new Point((this->_x - right._x), (this->_y - right._y)));
}

std::istream &operator>>(std::istream &is, Point &point) {
    std::cout << "enter x:" << std::endl;
    is >> point._x;
    std::cout << "enter y:" << std::endl;
    is >> point._y;
    return is;
}

bool Point::operator==(const Point &right) const {
    if (this->_x == right._x && this->_y == right._y) {
        return true;
    }
    return false;
}

double Point::getX() const {
    return _x;
}

double Point::getY() const {
    return _y;
}

Point &Point::operator*(int right) const {
    return *(new Point(this->_x * right, this->_y * right));
}

double Point::distance(Point point) {
    return sqrt(pow(this->_x - point._x, 2) + pow(this->_y - point._y, 2));
}