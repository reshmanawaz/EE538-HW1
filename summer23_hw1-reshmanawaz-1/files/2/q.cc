#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

// Write a function that returns true if the input number was prime and false
// otherwise.

//prime number: [2, 3, 5, 7, 11, 13, 17, 19, 23]
bool IsPrime(int number){
   //base case
    if (number <= 1){
        return false;
    }else{
        for (int i=2; i < number; i++){
            if (number % i == 0){
                return false;
            }else{
                return true;
            }
        }
    }
}
