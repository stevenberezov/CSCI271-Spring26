#include <iostream>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Accumulator Trace Example
Description: Demonstrates accumulator pattern using a for loop.
*/


int main()
{
    int sum = 0;
    
    for (int i = 1; i <= 10; i++){
        sum += i;
    }
    
    cout << "Final sum: " << sum << endl;

    return 0;
}

/*
Reflection:
1. What I understood from this program:
The accumulator stores running totals across iterations.

2. Difficulties I faced:
Tracing how sum changes each iteration.

3. What I needed to search or review:
Manual trace table method.

4. AI Usage (if any):
None. 

5. What I learned:
Counters track repetition. Accumulators store results.
*/