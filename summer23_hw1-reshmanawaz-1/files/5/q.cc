#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

//-----------------------------------------------------------------------------
// Given a non-negative integer n, to calculate how many distinct ways you can
// climb to the top. Your function should accept positive numbers less than 45
// and return the number of ways. We define:
// Rules of the climb stairs:
// You are climbing a staircase. Each time you can either climb 1 or 2 or 3
// steps. It takes n steps to reach the top. Your function takes n as input.

// If there are 0 stairs, return 0. For negative input, please
// return -1.
// For example, if the stairs number is 3, (n = 3), it should have 4 ways to the
// top:

// 1 + 1 + 1

// 1 + 2

// 2 + 1

// 3

// Please implement the function using recursion.
int ClimbStairs(int n){
    //base case
    if(n < 0) return -1;
    if (n == 0) return n;
    if (n == 1) return n;
    if (n == 2) return n;
    if (n == 3) return 4;

    if (n >= 1){
        std::cout<<"in" << std::endl;
        return ClimbStairs(n-3) + ClimbStairs(n-2)+ClimbStairs(n-1); //recursive step
        std::cout<<"out" << std::endl;

    }
} 

 
 