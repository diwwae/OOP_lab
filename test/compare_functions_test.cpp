#include <gtest/gtest.h>
#include "compare_functions.h"

TEST(CompareFunctionsTest, FirstStringEQSecondOneTest) {
  // arrange 
  std::string firstString = "Hello";
  std::string secondString = "Hello";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_EQ(result, 1);
}

TEST(CompareFunctionsTest, FirstStringNESecondOneTest) {
    // arrange 
  std::string firstString = "Hello";
  std::string secondString = "Hell";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_NE(result, 1);
}

TEST(CompareFunctionsTest, FirstStringNESecondOneTest1) {
    // arrange 
  std::string firstString = "Понедельник";
  std::string secondString = "Понедельник";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_EQ(result, 1);
}

TEST(CompareFunctionsTest, FirstStringNESecondOneTest2) {
    // arrange 
  std::string firstString = "Вторник";
  std::string secondString = "Среда";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_NE(result, 1);
}

TEST(CompareFunctionsTest, FirstStringNESecondOneTest3) {
    // arrange 
  std::string firstString = "Вторник";
  std::string secondString = "Вторник";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_EQ(result, 1);
}

TEST(CompareFunctionsTest, FirstStringNESecondOneTest4) {
    // arrange 
  std::string firstString = "Пятница";
  std::string secondString = "Пятницааа";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_NE(result, 1);
}