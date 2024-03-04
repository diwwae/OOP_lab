#include "Square.h"
#include "gtest/gtest.h"

class SquareTest : public ::testing::Test{
protected:
    void SetUp() override{
         Square _Square({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)});
    }
    void TearDown() override{}
};

TEST_F(SquareTest, areaTest){
    Square _Square({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)});
    double area = _Square.calculateSquare();
    ASSERT_DOUBLE_EQ(4, area);
}

TEST_F(SquareTest, centerOfRoundingTest){
    Square _Square({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)});
    Point centerOfRoundingTest = _Square.calculateCenter();
    ASSERT_EQ(Point(2, 2), centerOfRoundingTest);
}

TEST_F(SquareTest, getterTest){
    std::vector<Point> peaks = {Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)};
    Square _Square(peaks);

    std::vector<Point> result = _Square.getPeaks();
    ASSERT_EQ(peaks, result);
}

TEST_F(SquareTest, equalsTest){
    Square _Square({Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2)});
    std::vector<Point> peaks = {Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2)};
    Square Square(peaks);

    bool result = _Square == Square;

    ASSERT_TRUE(result);
}

TEST_F(SquareTest, parametrizeConstructorTest){
    std::vector<Point> peaks = {Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2)};
    Square Square(peaks);

    std::vector<Point> result = Square.getPeaks();

    ASSERT_EQ(peaks, result);
}