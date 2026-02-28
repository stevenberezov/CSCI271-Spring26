#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: For Loop Counter
Description: Prints numbers 1 through 5 using a for loop.
*/


int main()
{

    for (int i = 1; i <= 5; i++){
        cout << i << endl;
    }
    
    return 0;
}

/*
Reflection:
1. What I understood from this program:
The for loop combines initialization, condition, and increment in one line.

2. Difficulties I faced:
Off by one errors in condition.

3. What I needed to search or review:
Difference between i < 5 and i <= 5.

4. AI Usage (if any):
None, as it was copied from Lesson 4 slides

5. What I learned:
For loops are efficient for counter controlled iteration.
*/