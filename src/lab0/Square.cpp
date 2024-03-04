#include "Square.h"
#include <cmath>

template<class T>
Square<T>::Square() = default;

template<class T>
Square<T>::Square(std::vector<Point<T>> peaks){
    this->_peaks = peaks;
}

template<class T>
Figure<T> &Square<T>::operator=(Figure<T> right){
    if (const Square* square = dynamic_cast<const Square*>(&right)){
        this->_peaks = right.getPeaks();
    } else{
        throw std::exception();
    }
}

template<class T>
T Square<T>::calculateSquare(){
    Point Side = this->_peaks.at(0) - this->_peaks.at(1);
    double area = pow(Side.getX(), 2) + pow(Side.getY(), 2);
    return area;
}