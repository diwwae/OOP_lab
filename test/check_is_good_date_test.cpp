#include <gtest/gtest.h>
#include "check_is_good_date.h"

TEST(CheckIsGoodDateTest, isGoodNumberTrueTest) {
  // arrange 
  std::string DOWString = "Tuesday";
  int number = 100;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_EQ(result, 1);
}

TEST(CheckIsGoodDateTest, isGoodNumberFalseTest) {
  // arrange 
  std::string DOWString = "Tuesday";
  int number = 10;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_EQ(result, 0);
}