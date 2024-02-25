#include "Trapezoid.h"
#include <cmath>
#include "FigureValidator.h"

Trapezoid::Trapezoid() = default;

Trapezoid::Trapezoid(std::vector<Point> peaks){
    _peaks = peaks;
}

Figure &Trapezoid::operator=(Figure right){
    if (const Trapezoid* trapezoid = dynamic_cast<const Trapezoid*>(&right)){
        _peaks = right.getPeaks();
    } else{
        throw std::exception();
    }
}

Trapezoid &Trapezoid::createFromPoints(std::vector<Point> peaks){
    FigureValidator::validate(typeid(Trapezoid), peaks);
    return *new Trapezoid(peaks);
}

double Trapezoid::calculateSquare(){
    //сделать проверку на точки
    Point firstSide = _peaks.at(1) - _peaks.at(2);
    Point secondSide = _peaks.at(0) - _peaks.at(3);
    Point height = _peaks.at(0) - _peaks.at(1);
    double area = 0.5 * (sqrt(pow(firstSide.getX(), 2) + pow(firstSide.getY(), 2)) + sqrt(pow(secondSide.getX(), 2) + \
    pow(secondSide.getY(), 2))) * sqrt(pow(height.getY(),2)) ;
    return area;
}