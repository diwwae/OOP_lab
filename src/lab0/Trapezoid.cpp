#include "Trapezoid.h"
#include <cmath>
#include "FigureValidator.h"

template<class T>
Trapezoid<T>::Trapezoid() = default;

template<class T>
Trapezoid<T>::Trapezoid(std::vector<Point<T>> peaks){
    this->_peaks = peaks;
}

template<class T>
Figure<T> &Trapezoid<T>::operator=(Figure<T> right){
    if (const Trapezoid* trapezoid = dynamic_cast<const Trapezoid*>(&right)){
        this->_peaks = right.getPeaks();
    } else{
        throw std::exception();
    }
}

template<class T>
Trapezoid<T> &Trapezoid<T>::createFromPoints(std::vector<Point<T>> peaks){
    FigureValidator<T>::validate(typeid(Trapezoid), peaks);
    return *new Trapezoid(peaks);
}

template<class T>
T Trapezoid<T>::calculateSquare(){
    //сделать проверку на точки
    Point firstSide = this->_peaks.at(1) - this->_peaks.at(2);
    Point secondSide = this->_peaks.at(0) - this->_peaks.at(3);
    Point height = this->_peaks.at(0) - this->_peaks.at(1);
    double area = 0.5 * (sqrt(pow(firstSide.getX(), 2) + pow(firstSide.getY(), 2)) + sqrt(pow(secondSide.getX(), 2) + \
    pow(secondSide.getY(), 2))) * sqrt(pow(height.getY(),2)) ;
    return area;
}