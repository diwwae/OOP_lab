#include "SquareValidator.h"
#include <cmath>
#include "Square.h"

template<class T>
void SquareValidator<T>::validateFigure(std::vector<Point<T>> peaks){
    if (peaks.size() != 4){
        throw std::invalid_argument("_square need 4 points");
    }

    double footing1 = sqrt(
            pow(peaks.at(0).getX() - peaks.at(1).getX(), 2) +
            pow(peaks.at(0).getY() - peaks.at(1).getY(), 2)
    );

    double footing2 = sqrt(
            pow(peaks.at(1).getX() - peaks.at(2).getX(), 2) +
            pow(peaks.at(1).getY() - peaks.at(2).getY(), 2)
    );

    double footing3 = sqrt(
            pow(peaks.at(2).getX() - peaks.at(3).getX(), 2) +
            pow(peaks.at(2).getY() - peaks.at(3).getY(), 2)
    );

    double footing4 = sqrt(
            pow(peaks.at(3).getX() - peaks.at(0).getX(), 2) +
            pow(peaks.at(3).getY() - peaks.at(0).getY(), 2)
    );

    if (footing1 == footing2 && footing1 == footing3 && footing1 == footing4){
        throw std::invalid_argument("footings of square have to be equals");
    }

    if (peaks.at(0).getY() != peaks.at(3).getY() || peaks.at(1).getY() != peaks.at(2).getY() || 
        (peaks.at(0).getX() == peaks.at(1).getX() && peaks.at(2).getX() == peaks.at(3).getX())){
            throw std::invalid_argument("footings have to be parallel");
        }
}

template<class T>
bool SquareValidator<T>::isAllowedForType(const std::type_info &typeInfo) {
    return typeid(Square<T>) == typeInfo;
}