#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Input Validation Using do while
Description: Forces the user to enter a number between 1 and 5 using a validation loop.
*/

int main()
{

    int number;
    
    do {
        cout << "Enter a number between 1 and 5: ";
        cin >> number;
        
        if (number < 1 || number > 5) {
            cout << "Invalid input. Try again." << endl;
        }
        
    } while (number < 1 || number > 5);
    
    cout << "Valid number entered: " << number << endl;
    
    return 0;
}

/*
Reflection:
1. What I understood from this program:
The do while loop guarantees the user is prompted at least once. It enforces valid input before continuing.

2. Difficulties I faced:
Writing the correct logical condition using || for invalid ranges.

3. What I needed to search or review:
How logical operators combine conditions.

4. AI Usage (if any):
None.

5. What I learned:
Validation loops protect program reliability by preventing invalid data.
*/