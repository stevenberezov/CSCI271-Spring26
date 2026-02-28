#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Assignment vs Comparison Example
Description: Demonstrates difference between = and == inside a condition.
*/

int main()
{
    int x = 5;
    cout << "x contains a number of 5" << endl;
    
    if (x == 5) {
        cout << "x is equal to 5" << endl;
    }

    return 0;
}