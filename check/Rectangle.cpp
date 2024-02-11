#include "Rectangle.h"
#include <cmath>
#include "FigureValidator.h"

Rectangle::Rectangle() = default;

Rectangle::Rectangle(std::vector<Point> peaks){
    FigureValidator::validate(typeid(Rectangle), peaks);
    _peaks = peaks;
}

// void Rectangle::setPeaks(std::vector<Point> peaks){
//     // FigureValidator::validateFigure(typeid(Rectangle), peaks);
//     _peaks = peaks;
// }

double Rectangle::calculateSquare(){
    Point firstSide = _peaks.at(0) - _peaks.at(1);
    Point secondSide = _peaks.at(1) - _peaks.at(2);
    double area = sqrt(pow(firstSide.getX(), 2) + pow(firstSide.getY(), 2)) * sqrt(pow(secondSide.getX(), 2) + pow(secondSide.getY(), 2));
    // std::cout << firstSide.getX() << ' ' << firstSide.getY() << ' ' << secondSide.getX() << ' ' << secondSide.getY() << std::endl;
    return area;
}

Figure &Rectangle::operator=(Figure right){
    if (const Rectangle* rectangle = dynamic_cast<const Rectangle*>(&right)){
        _peaks = right.getPeaks();
    } else{
        throw std::exception();
    }
}