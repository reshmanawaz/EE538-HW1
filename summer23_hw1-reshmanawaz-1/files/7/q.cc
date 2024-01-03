#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

// Given two strings s and goal, return true if and only if s can become goal
// after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost
// position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.

// Example 1:
// Input: s = "abcde", goal = "cdeab"
// Output: true

// Example 2:
// Input: s = "abcde", goal = "abced"
// Output: false
bool CanBecome(const std::string &s, const std::string &goal){
    // if(s == goal){
    //     return true; 
    // }
    std::string temp=s; 
    int size_s = s.size();
    int size_goal = goal.size();
    if(size_s != size_goal){ //if lengths don't match = false 
        return false; 
    }
    if(s.empty() != goal.empty()){
        return true; 
    }

    while (size_s > 0){
        temp = s.substr(1)+s[0];
        if (s == goal)
        return true; 
    }
   return false; 
}

