#include "RectangleValidator.h"
#include "Rectangle.h"
#include <cmath>

template<class T>
void RectangleValidator<T>::validateFigure(std::vector<Point<T>> peaks){
    if (peaks.size() != 4){
        throw std::invalid_argument("_rectangle needs 4 points");
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

    if (footing2 != footing4){
        throw std::invalid_argument("footings of rectangle have to be equals");
    }

    if (footing1 != footing3){
        throw std::invalid_argument("footings of rectangle have to be equals");
    }
}

template<class T>
bool RectangleValidator<T>::isAllowedForType(const std::type_info &typeInfo) {
    return typeid(Rectangle<T>) == typeInfo;
}

