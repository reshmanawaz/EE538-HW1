#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

//Input: [1,2,3]  =>	Output: [3, 2, 1].
TEST(reverse, reverseTest){
    std::vector<int> input = {1, 2, 3};
    std::vector<int> output = {3, 2, 1};
    EXPECT_EQ(Reverse(input), output);
}
TEST(reverse, reverseTest1){
    std::vector<int> input = {};
    std::vector<int> output = {};
    EXPECT_EQ(Reverse(input), output);
}
TEST(reverse, reverseTest2){
    std::vector<int> input = {1};
    std::vector<int> output = {1};
    EXPECT_EQ(Reverse(input), output);
}

 
//Input: [1, 9]	=> Output: [2,0]
TEST(plusone, plusoneTest){
    std::vector<int> input = {1, 9};
    std::vector<int> output = {2, 0};
    EXPECT_EQ(PlusOne(input), output);
}

//Input: [9,9,9]  =>  Output: [1,0,0,0]
TEST(plusone, plusoneTest1){
    std::vector<int> input = {9,9,9};
    std::vector<int> output = {1,0,0,0};
    EXPECT_EQ(PlusOne(input), output);
}
// //Input: [12]  =>  Output: [-1]   // Invalid input!
// TEST(plusone, plusoneTest2){
//     std::vector<int> input = {10};
//     std::vector<int> output = {-1};
//     EXPECT_EQ(PlusOne(input), output);
// }


