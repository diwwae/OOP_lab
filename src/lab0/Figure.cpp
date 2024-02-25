#include "Figure.h"
#include <vector>

template<class T>
Figure<T>::Figure() = default;

template<class T>
Figure<T>::Figure(std::vector<Point<T>> peaks){
    _peaks = peaks;
}

template<class T>
Point<T> Figure<T>::calculateCenter(){
    double sum_x = 0.0;
    double sum_y = 0.0;
    for (int index = 0; index < _peaks.size(); ++index){
        sum_x += _peaks.at(index).getX();
        sum_y += _peaks.at(index).getY();
    }
    return *new Point(sum_x / (double) _peaks.size(), sum_y / (double) _peaks.size());
}

template<class T>
Figure<T>& Figure<T>::operator=(Figure<T> right){
    this->_peaks = right._peaks;
    return *this;
}

template<class T>
Figure<T>::Figure(const Figure<T> &right) noexcept {
    this->_peaks = right._peaks;
}

template<class T>
Figure<T>::Figure(Figure<T> &&right) noexcept {
    this->_peaks = std::move(right._peaks);
}

template<class T>
bool Figure<T>::operator==(Figure<T> &right){
    return (this->_peaks == right._peaks);
}

template<class T>
std::vector<Point<T>> Figure<T>::getPeaks(){
    return this->_peaks;
}
