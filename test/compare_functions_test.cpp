#include <gtest/gtest.h>
#include "compare_functions.h"

TEST(CompareFunctionsTest, FirstStringEQSecondOneTest) {
  // arrange 
  std::string firstString = "Hello";
  std::string secondString = "Hello";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_EQ(result, 0);
}

TEST(CompareFunctionsTest, FirstStringNESecondOneTest) {
    // arrange 
  std::string firstString = "Hello";
  std::string secondString = "Hell";

  // act
  int result = compareStrings(firstString, secondString);
  
  // assert
  EXPECT_NE(result, 0);
}