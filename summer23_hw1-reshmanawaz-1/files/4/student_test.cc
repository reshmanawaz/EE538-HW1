#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

// Input:
// [
//   [[1, 2], [3, 4]],
//   [[5], [6], []],
//   [[7, 8]]
// ]
// Output: [1, 2, 3, 4, 5, 6, 7, 8].

TEST(Vector, test1){
     std::vector<std::vector<std::vector<int>>> input ={{{1,2},{3,4}},
                                                         {{5}, {6}, {}},
                                                                {{7,8}}};
    
     std::vector<int> output = {1, 2, 3, 4, 5, 6, 7, 8};
    EXPECT_EQ(Flatten3DVector(input), output);
}
    