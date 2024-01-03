#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(stairs, test1){
    int expected = 0; 
    int actual = ClimbStairs(0);
    EXPECT_EQ(expected, actual);
}
TEST(stairs, test2){
    int expected = -1; 
    int actual = ClimbStairs(-2);
    EXPECT_EQ(expected, actual);
}
TEST(stairs, test3){
    int expected = 4; 
    int actual = ClimbStairs(3);
    EXPECT_EQ(expected, actual);
} 