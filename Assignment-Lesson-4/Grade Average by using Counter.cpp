#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Counter Controlled Class Average
Description: Calculates class average using fixed number of grades.
*/

int main()
{

    int total = 0;
    int count = 0;
    int grade;
    
    while (count < 3){
        cout << "Enter grade: ";
        cin >> grade;
        total += grade;
        count++;
    }
    
    double average = static_cast<double>(total) / count;
    cout << "Average: " << average << endl;
    
    return 0;
}

/*
Reflection:
1. What I understood from this program:
Counter controlled loops run a fixed number of times.

2. Difficulties I faced:
Integer division error before casting.

3. What I needed to search or review:
static_cast usage.

4. AI Usage (if any):
None.

5. What I learned:
Casting prevents from dropping all digits in division.
*/