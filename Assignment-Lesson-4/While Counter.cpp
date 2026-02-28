#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: While Loop Counter
Description: Prints numbers 1 through 5 using a while loop.
*/

int main() 
{
    
    int counter = 1;

    while (counter <= 5) {
        cout << counter << endl;
        counter++;
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program:
The while loop checks the condition before running. The loop continues while the condition is true.

2. Difficulties I faced:
Forgetting to increment the counter causes an infinite loop.

3. What I needed to search or review:
Review of loop condition evaluation order.

4. AI Usage (if any):
None, as it was copied from Lesson 4 slides

5. What I learned:
A while loop must change the condition variable inside the loop.
*/