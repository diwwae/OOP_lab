#include "Point.h"

template<class T>
Point<T>::Point()=default;

template<class T>
Point<T>::Point(T x, T y){
    _x = x;
    _y = y;
}

template<class T>
Point<T>& Point<T>::operator=(Point<T> right){
    this->_x = right._x;
    this->_y = right._y;
    return *this;
}

template<class T>
Point<T>& Point<T>::operator+(Point<T> &right){
    return *(new Point((this->_x + right._x), (this->_y + right._y)));
}

template<class T>
Point<T>& Point<T>::operator-(Point<T> &right){
    return *(new Point((this->_x - right._x), (this->_y - right._y)));
}

template<class T>
std::ostream &operator<<(std::ostream &out,const Point<T> &point){
    out << "x: " << point._x << " y: " << point._y;
    return out;
}

template<class T>
std::istream &operator>>(std::istream &in, Point<T> &point){
    in >> point._x >> point._y;

    return in;
}

template<class T>
bool Point<T>::operator==(Point<T> const &right) const {
    if (this->_x == right._x && this->_y == right._y){
        return true;
    }
    return false;
}

template<class T>
T Point<T>::getX(){
    return _x;
}

template<class T>
T Point<T>::getY(){
    return _y;
}

