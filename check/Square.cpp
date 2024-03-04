#include "Square.h"
#include <cmath>

Square::Square() = default;

Square::Square(std::vector<Point> peaks){
    _peaks = peaks;
}

Figure &Square::operator=(Figure right){
    if (const Square* square = dynamic_cast<const Square*>(&right)){
        _peaks = right.getPeaks();
    } else{
        throw std::exception();
    }
}

double Square::calculateSquare(){
    Point Side = _peaks.at(0) - _peaks.at(1);
    double area = pow(Side.getX(), 2) + pow(Side.getY(), 2);
    return area;
}