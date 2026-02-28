#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Do While Example
Description: Demonstrates that a do while loop executes at least once.
*/

int main()
{

    int number = 6;
    
    do {
        cout << "Number is: " << number << endl;
        number++;
    } while (number <= 5);
    
    return 0;
}

/*
Reflection:
1. What I understood from this program:
A do while loop runs once before checking condition.

2. Difficulties I faced:
Remembering semicolon after while condition.

3. What I needed to search or review:
Syntax structure of do while.

4. AI Usage (if any):
None.

5. What I learned:
Condition is checked after execution.
*/