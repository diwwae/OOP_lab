#include "Rectangle.h"
#include <cmath>
#include "FigureValidator.h"

template<class T>
Rectangle<T>::Rectangle() = default;

template<class T>
Rectangle<T>::Rectangle(std::vector<Point<T>> peaks){
    FigureValidator<T>::validate(typeid(Rectangle), peaks);
    this->_peaks = peaks;
}

// void Rectangle::setPeaks(std::vector<Point> peaks){
//     // FigureValidator::validateFigure(typeid(Rectangle), peaks);
//     _peaks = peaks;
// }

template<class T>
T Rectangle<T>::calculateSquare(){
    Point firstSide = this->_peaks.at(0) - this->_peaks.at(1);
    Point secondSide = this->_peaks.at(1) - this->_peaks.at(2);
    double area = sqrt(pow(firstSide.getX(), 2) + pow(firstSide.getY(), 2)) * sqrt(pow(secondSide.getX(), 2) + pow(secondSide.getY(), 2));
    // std::cout << firstSide.getX() << ' ' << firstSide.getY() << ' ' << secondSide.getX() << ' ' << secondSide.getY() << std::endl;
    return area;
}

template<class T>
Figure<T> &Rectangle<T>::operator=(Figure<T> right){
    if (const Rectangle* rectangle = dynamic_cast<const Rectangle*>(&right)){
        this->_peaks = right.getPeaks();
    } else{
        throw std::exception();
    }
}