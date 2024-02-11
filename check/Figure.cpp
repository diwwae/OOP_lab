#include "Figure.h"
#include <vector>

Figure::Figure() = default;

Figure::Figure(std::vector<Point> peaks){
    _peaks = peaks;
}

Point Figure::calculateCenter(){
    double sum_x = 0.0;
    double sum_y = 0.0;
    for (int index = 0; index < _peaks.size(); ++index){
        sum_x += _peaks.at(index).getX();
        sum_y += _peaks.at(index).getY();
    }
    return *new Point(sum_x / (double) _peaks.size(), sum_y / (double) _peaks.size());
}

Figure& Figure::operator=(Figure right){
    this->_peaks = right._peaks;
    return *this;
}

Figure::Figure(const Figure &right) noexcept {
    this->_peaks = right._peaks;
}

Figure::Figure(Figure &&right) noexcept {
    this->_peaks = std::move(right._peaks);
}

bool Figure::operator==(Figure &right){
    return (this->_peaks == right._peaks);
}

std::vector<Point> Figure::getPeaks(){
    return this->_peaks;
}
