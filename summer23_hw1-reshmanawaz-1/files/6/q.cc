#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

// We defined the following enum class:
//enum class ErrorCode { kNoError, kDivideByZero };

// Given two float values a, b, return their sum, difference, product, and ratio
// (i.e. a/b). Use C++ references to return multiple values. The functions
// return value should be of type ErrorCode. Use this as the signature of your
// function.
// For your unit tests use EXPECT_FLOAT_EQ instead of EXPECT_EQ.
ErrorCode Calculator(float a, float b, float &sum, float &diff, float &product, float &ratio){
    product = a*b;
    diff = a-b;
    sum = a+b;
    ratio = a/b;
    if(ratio){
        return ErrorCode::kNoError;
    }else{
       ratio = 0; 
       return ErrorCode::kDivideByZero;
    }
}