
# HW1 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc.
  We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Deadline: June 13th by 12:00 pm (noon)
- Rubrics:
  
| Question | Points |
| -------- | ------ |
| 1        | 18     |
| 2        | 18     |
| 3        | 18     |
| 4        | 18     |
| 5        | 18     |
| 6        | 18     |
| 7        | 18     |

- Total: 126 points. 100 points is considered full credit.


See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.

# Question
- Please refer to [files](/files).
- For each question, implement and test it in the [files](/files).
- Write the runtime complexity of each question in this README file.

# Answers
[TODO: Should be filled out with runtime complexity of each question with justification.]

- Question 1:
  - Runtime: Reverse Function: The runtime complexity of this function would be O(n/2) as the for-loop iterates through half of the size of the vector. However, in Big-O notation, the constants factors are ignored therefore the complexity is O(n).
  - Runtime: PlusOne Function: The runtime complexity of this function is O(n) where n is the size of the input vector as the for-loop iterates through the input vector and updates the element at the end. 
- Question 2: 
  - Runtime: IsPrime Function: The runtime complexity of this function is O(n) because the for-loop iterates n times. Therfore,the total time for the for loop to run is O(1)*n = O(n). 
- Question 3: 
  - Runtime: CountNumberOfSpaces Function: The runtime complexity of this function is O(n) where n is the size of the input string. The loop iterates through the entire string and the number of iterations is directly corresponding to the size of the string, therefore the complexity is O(n) where n is the size of the input string.   
- Question 4: 
  - Runtime: Flatten3DVector Function: This function has 3 nested for-loops inside one-another. Therefore, the time complexity of the first two dimensions is O(n*m) as the outter loop iterates so does the inner loop. Then adding the third dimension, the runtime complexity would be O(1*n*m).
- Question 5:  
  - Runtime: ClimbStairs Function: The runtime complexity of this function will be O(3^n) as this function is calling 3 recurisve calls within the if-loop. As the input size grows, the recursive calls will also grow exponentially. 
- Question 6: 
  - Runtime: Calculator Function: The runtime complexity here would be O(1) since there is only one if-else loop that is testing the ration (a/b) to assgin the corresponding error code. 
- Question 7: 
  - Runtime: CanBecome Function: