#include "gtest/gtest.h"
#include "hex.h"

TEST(HexTest, StringConstructor) {
    Hex hex = Hex("14A");

    testing::internal::CaptureStdout();
    hex.print();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "14A\n");
}

TEST(HexTest, CopyConstructor) {
    Hex hex = Hex("330");
    Hex copy(hex);
    EXPECT_EQ(copy, hex);
}

TEST(HexTest, AdditionOperator) {
    Hex hex1 = Hex("2A");
    Hex hex2 = Hex("4B");
    Hex result = hex1 + hex2;

    Hex resHex = Hex("75");
    EXPECT_EQ(result, resHex);
}

TEST(HexTest, SubtractionOperator) {
    Hex hex1 = Hex("4B");
    Hex hex2 = Hex("2A");
    Hex result = hex1 - hex2;

    Hex resHex = Hex("21");
    EXPECT_EQ(result, resHex);
}

TEST(HexTest, EqualityOperator) {
    Hex hex1 = Hex("2A");
    Hex hex2 = Hex("B");
    EXPECT_FALSE(hex1 == hex2);
    EXPECT_TRUE(hex1 == Hex("2A"));
}

TEST(HexTest, InequalityOperator) {
    Hex hex1 = Hex("2A");
    Hex hex2 = Hex("2B");
    EXPECT_TRUE(hex1 != hex2);
}

TEST(HexTest, GreaterThanOperator) {
    Hex hex1 = Hex("A");
    Hex hex2 = Hex("1");
    EXPECT_TRUE(hex1 > hex2);
}

TEST(HexTest, LessThanOperator) {
    Hex hex1 = Hex("A");
    Hex hex2 = Hex("1");
    EXPECT_FALSE(hex1 < hex2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}