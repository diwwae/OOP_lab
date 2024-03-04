#include "Figure.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Square.h"
#include ".h"
#include <memory>

int main(){
    std::vector<Point<int>> initialPoints = {Point(1,2),Point(4,2),Point(4,0),Point(1,0)};

    std::shared_ptr<Figure<int>> fig = std::make_shared<Figure<int>>(); 
    std::shared_ptr<Rectangle<std::vector<Point<int>>>> rec = std::make_shared<Rectangle<std::vector<Point<int>>>>(initialPoints); 

    // rec->Rectangle({Point(1,2),Point(4,2),Point(4,0),Point(1,0)});

    rec->calculateSquare();

    // Rectangle rectangle({Point(1,2),Point(4,2),Point(4,0),Point(1,0)}); 
    // Trapezoid trapezoid = Trapezoid::createFromPoints({Point(0,0),Point(1,2),Point(3,2),Point(4,0)});
    // Figure fig({Point(1,2)});
    // Square square({Point(1,2),Point(3,2),Point(3,0),Point(1,0)});
    // Trapezoid<T> _trapezoid;
    // _trapezoid.createFromPoints({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});

    // std::cout << _trapezoid.calculateCenter() << std::endl;
    // std::cout << _trapezoid.calculateSquare() << std::endl;
    // // Rectangle wrong_rec({Point(1,2),Point(4,2),Point(4,0),Point(8,0)});
    
    // // std::cout << fig.calculateCenter() << std::endl;
    // // std::cout << rectangle.calculateCenter() << std::endl;
    // // std::cout << trapezoid.calculateCenter() << std::endl;
    // std::cout << rectangle.calculateSquare() << std::endl;
    // std::cout << square.calculateSquare() << std::endl;
    // std::cout << trapezoid.calculateSquare() << std::endl;

    // std::cout << wrong_rec.calculateSquare() << std::endl;

    return 0;
}