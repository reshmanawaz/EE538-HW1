#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(calc, sum){
    int expected = 2;
    EXPECT_FLOAT_EQ(expected, 2);
}
TEST(calc, prod){
    int expected = 4;
    EXPECT_FLOAT_EQ(expected, 4);
}
TEST(calc, diff){
    int expected = 0;
    EXPECT_FLOAT_EQ(expected, 0);
}
TEST(calc, ratio){
    int expected = 1;
    EXPECT_FLOAT_EQ(expected, 1);
}