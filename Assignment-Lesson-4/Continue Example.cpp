#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Continue Example
Description: Skips printing number 3.
*/

int main()
{
    
    for (int i = 1; i <= 5; i++){
        if (i == 3) {
            continue;
        }
        
        cout << i << endl;
        
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program:
Continue skips current iteration and moves to next.

2. Difficulties I faced:
Ensuring loop increment still occurs.

3. What I needed to search or review:
Flow control diagrams.

4. AI Usage (if any):
None. 

5. What I learned:
Continue does not terminate loop.
*/