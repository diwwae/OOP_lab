#include <gtest/gtest.h>
#include "check_is_good_date.h"

TEST(CheckIsGoodDateTest, isGoodNumberTrueTest) {
  // arrange 
  std::string DOWString = "Вторник";
  int number = 100;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_EQ(result, 1);
}

TEST(CheckIsGoodDateTest, isGoodNumberFalseTest) {
  // arrange 
  std::string DOWString = "Вторник";
  int number = 10;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_EQ(result, 0);
}

TEST(CheckIsGoodDateTest, isGoodNumberFalseTest1) {
  // arrange 
  std::string DOWString = "Среда";
  int number = 34;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_EQ(result, 1);
}

TEST(CheckIsGoodDateTest, isGoodNumberFalseTest2) {
  // arrange 
  std::string DOWString = "Среда";
  int number = 10;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_NE(result, 1);
}

TEST(CheckIsGoodDateTest, isGoodNumberFalseTest3) {
  // arrange 
  std::string DOWString = "Четверг";
  int number = 0;

  // act
  int result = checkIsGoodDate(DOWString, number);
  
  // assert
  EXPECT_EQ(result, 1);
}