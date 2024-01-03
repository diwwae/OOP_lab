#pragma once
#include "BaseFigure.h"

class Trapezoid : public BaseFigure{
public:
    Trapezoid();

    explicit Trapezoid(Vector<Point>);

    bool operator==(const BaseFigure &right)const override;

    BaseFigure& operator=(BaseFigure const &right) override;

    friend std::ostream& operator<<(std::ostream& out, const Trapezoid& trapezoid);

    friend std::istream operator>>(std::istream& in, Trapezoid& rectangle);

    void setPeaks(Vector<Point>) override;

    explicit operator double() const override;

    ~Trapezoid() = default;

    static Trapezoid & createFromPoints(Vector<Point>);
};