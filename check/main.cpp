#include "Figure.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Square.h"

int main(){
    // Rectangle rectangle({Point(1,2),Point(4,2),Point(4,0),Point(1,0)}); 
    // Trapezoid trapezoid = Trapezoid::createFromPoints({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});
    // Figure fig({Point(1,2)});
    // Square square({Point(1,2),Point(3,2),Point(3,0),Point(1,0)});

    // // Rectangle wrong_rec({Point(1,2),Point(4,2),Point(4,0),Point(8,0)});
    Trapezoid trapezoid;
    Trapezoid _trapezoid;
    _trapezoid = trapezoid.createFromPoints({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});
    // Trapezoid _trapezoid;
    // _trapezoid.createFromPoints({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});

    // std::cout << _trapezoid.calculateCenter() << std::endl;
    // std::cout << _trapezoid.calculateSquare() << std::endl;

    // // std::cout << fig.calculateCenter() << std::endl;
    // // std::cout << rectangle.calculateCenter() << std::endl;
    std::cout << trapezoid.calculateCenter() << std::endl;
    // std::cout << rectangle.calculateSquare() << std::endl;
    // std::cout << square.calculateSquare() << std::endl;
    // std::cout << trapezoid.calculateSquare() << std::endl;

    // std::cout << wrong_rec.calculateSquare() << std::endl;

    return 0;
}