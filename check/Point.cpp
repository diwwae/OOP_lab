#include "Point.h"

Point::Point()=default;

Point::Point(double x, double y){
    _x = x;
    _y = y;
}

Point& Point::operator=(Point right){
    this->_x = right._x;
    this->_y = right._y;
    return *this;
}

Point& Point::operator+(Point &right){
    return *(new Point((this->_x + right._x), (this->_y + right._y)));
}

Point& Point::operator-(Point &right){
    return *(new Point((this->_x - right._x), (this->_y - right._y)));
}

std::ostream &operator<<(std::ostream &out,const Point &point){
    out << "x: " << point._x << " y: " << point._y;
    return out;
}

std::istream &operator>>(std::istream &in, Point &point){
    in >> point._x >> point._y;

    return in;
}

bool Point::operator==(Point const &right) const {
    if (this->_x == right._x && this->_y == right._y){
        return true;
    }
    return false;
}

double Point::getX(){
    return _x;
}

double Point::getY(){
    return _y;
}

