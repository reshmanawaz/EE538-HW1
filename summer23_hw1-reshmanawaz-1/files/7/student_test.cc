#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(CanBecome, test1){
    const std::string &input = "abcde";
    const std::string &goal  = "cdeab";
    EXPECT_EQ(CanBecome(input,goal), true);
}

// TEST(check, test2){
//     std::string input = "abcde";
//     std::string output = "abcdef";
//     EXPECT_EQ(CanBecome(input), false);
// }
