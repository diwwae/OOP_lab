#include "Trapezoid.h"
#include "gtest/gtest.h"

class TrapezoidTest : public ::testing::Test{
protected:
    void SetUp() override{
        Trapezoid _trapezoid({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});
    }
    void TearDown() override{}
};

TEST_F(TrapezoidTest, areaTest){
    Trapezoid _trapezoid({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});
    double area = double (_trapezoid.calculateSquare());
    ASSERT_DOUBLE_EQ(48, area);
}

TEST_F(TrapezoidTest, centerOfRoundingTest){
    Trapezoid _trapezoid({Point(0, 0), Point(2, 6), Point(8, 6), Point(10, 0)});
    Point centerOfRoundingTest = _trapezoid.calculateCenter();
    ASSERT_EQ(Point(5, 3), centerOfRoundingTest);
}

TEST_F(TrapezoidTest, equalsTest){
    std::vector<Point> peaks = {Point(1, 1), Point(3, 7), Point(9, 7), Point(11, 1)};
    Trapezoid _trapezoid(peaks);

    Trapezoid trapezoid({Point(1, 1), Point(3, 7), Point(9, 7), Point(11, 1)});

    bool result = _trapezoid == trapezoid;

    ASSERT_TRUE(result);
}

TEST_F(TrapezoidTest, parametrizeConstructorTest){
    std::vector<Point> peaks = {Point(1, 1), Point(3, 7), Point(9, 7), Point(11, 1)};
    Trapezoid trapezoid(peaks);

    std::vector<Point> result = trapezoid.getPeaks();

    ASSERT_EQ(peaks, result);
}