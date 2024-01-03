#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>

// Given a vector, return its reversed version.
std::vector<int> Reverse(std::vector<int> input)
{
    // element list
    int temp;

    for (int i = 0; i < input.size() / 2; i++)
    {
        temp = input[i];
        input[i] = input[input.size() - 1 - i];
        input[input.size() - 1 - i] = temp;
    }
    return input;
}

//-----------------------------------------------------------------------------
// Input: [1,2,3]  =>	Output: [1,2,4].
// [1,2,3] represents number 123. Then 123 + 1 = 124 which is
// represented by [1, 2, 4].

std::vector<int> PlusOne(std::vector<int> input)
{
    int size = input.size();
    for (int i = size - 1; i >= 0 && i <= 9; i--)
    {
        if (input[i] == 9)
        {
            input[i] = 0;
        }
        else
        {
            input[i] += 1;
            return input;
        }
    }
    input.push_back(0); // this case will change 999 + 1 = 10000
    input[0] = 1;
    return input;

}
