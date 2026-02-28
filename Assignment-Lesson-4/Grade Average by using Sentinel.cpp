#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Sentinel Controlled Average
Description: Calculates average until user enters -1.
*/

int main()
{

    int grade;
    int total = 0;
    int count = 0;
    
    cout << "Enter a grade (-1 to stop): ";
    cin >> grade;
    
    while (grade != -1){
        total += grade;
        count++;
        
        cout << "Enter grade (-1 to stop): ";
        cin >> grade;
    }
    
    if (count > 0){
        double average = static_cast<double>(total) / count;
        cout << "Average: " << average << endl;
    } else {
        cout << "No grades entered. " << endl;
    }
    
    return 0;
}


/*
Reflection:
1. What I understood from this program:
Sentinel controlled loops stop when a special value is entered.

2. Difficulties I faced:
Placing input correctly inside loop.

3. What I needed to search or review:
Loop tracing with sentinel value.

4. AI Usage (if any):
None.

5. What I learned:
Sentinel loops require careful input placement.
*/