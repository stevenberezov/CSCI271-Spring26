#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Break Example
Description: Stops loop early when number 3 is reached.
*/

int main()
{

    for (int i = 1; i <= 5; i++){
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program:
Break immediately exits the loop.

2. Difficulties I faced:
Understanding that it does not exit program, only loop.

3. What I needed to search or review:
Difference between break and continue.

4. AI Usage (if any):
None.

5. What I learned:
Break overrides loop condition.
*/