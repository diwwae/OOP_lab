#include "Rectangle.h"
#include "gtest/gtest.h"

class RectangleTest : public ::testing::Test{
protected:
    void SetUp() override{
         Rectangle _rectangle({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)});
    }
    void TearDown() override{}
};

TEST_F(RectangleTest, areaTest){
    Rectangle _rectangle({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)});
    double area = _rectangle.calculateSquare();
    ASSERT_DOUBLE_EQ(4, area);
}

TEST_F(RectangleTest, centerOfRoundingTest){
    Rectangle _rectangle({Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)});
    Point centerOfRoundingTest = _rectangle.calculateCenter();
    ASSERT_EQ(Point(2, 2), centerOfRoundingTest);
}

TEST_F(RectangleTest, getterTest){
    std::vector<Point> peaks = {Point(1, 1), Point(1, 3), Point(3, 3), Point(3, 1)};
    Rectangle _rectangle(peaks);

    std::vector<Point> result = _rectangle.getPeaks();
    ASSERT_EQ(peaks, result);
}

TEST_F(RectangleTest, equalsTest){
    Rectangle _rectangle({Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2)});
    std::vector<Point> peaks = {Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2)};
    Rectangle rectangle(peaks);

    bool result = _rectangle == rectangle;

    ASSERT_TRUE(result);
}

TEST_F(RectangleTest, parametrizeConstructorTest){
    std::vector<Point> peaks = {Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2)};
    Rectangle rectangle(peaks);

    std::vector<Point> result = rectangle.getPeaks();

    ASSERT_EQ(peaks, result);
}