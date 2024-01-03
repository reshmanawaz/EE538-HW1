#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(CPPLibTest, test1){
    int expected = false; //if n=0
    int actual = IsPrime(0);
    EXPECT_EQ(expected, actual);
}
