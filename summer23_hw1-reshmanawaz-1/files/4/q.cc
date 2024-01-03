#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

// Write a function to flatten a 3D vector into a 1D vector. Keep the original order of entries in the 3D vector.
// Example:
// Input:
// [
//   [[1, 2], [3, 4]],
//   [[5], [6], []],
//   [[7, 8]]
// ]
// Output: [1, 2, 3, 4, 5, 6, 7, 8].
std::vector<int> Flatten3DVector(std::vector<std::vector<std::vector<int>>> input){
    std::vector<int> output;
    int x,y,z;
    int size = input.size();

    //3D vector 
    for(x=0; x<size; ++x){
        // std::cout<<"row 1" << x << std::endl;
        for(y=0; y<input[x].size(); ++y){
            //  std::cout<<"row 2" << x << std::endl;
            for(z=0; z<input[x][y].size(); ++z){
                //  std::cout<<"row 3" << x << std::endl;
                output.push_back(input[x][y][z]);
            }
        }
    }
    return output; 
    
}