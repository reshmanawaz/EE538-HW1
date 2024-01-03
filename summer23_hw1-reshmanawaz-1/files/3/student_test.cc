#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

//edge cases: no spaces, all spaces, one space, etc


TEST(countspace, test1){
    std::string input = "helloworld";
    EXPECT_EQ(CountNumberOfSpaces(input), 0);
}
TEST(countspace, test2){
    std::string input = "hello world";
    EXPECT_EQ(CountNumberOfSpaces(input), 1);
}
TEST(countspace, test3){
    std::string input = "";
    EXPECT_EQ(CountNumberOfSpaces(input), 0);
}
TEST(countspace, test4){
    std::string input = " ";
    EXPECT_EQ(CountNumberOfSpaces(input), 1);
}




