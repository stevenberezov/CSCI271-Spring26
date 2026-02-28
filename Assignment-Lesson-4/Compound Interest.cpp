#include <iostream>

#include <cmath>

using namespace std;

/*
Name: Steven Berezov
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Compound Interest Calculation
Description: Calculates compound interest using pow from cmath.
*/

int main()
{
    
    double principalAmount;
    double annualInterestRate;
    int numberOfYears;
    
    cout << "Enter principal amount: $ ";
    cin >> principalAmount;
    
    cout << "Enter annual interest rate as decimal (0.05 for 5%): ";
    cin >> annualInterestRate;
    
    cout << "Enter number of years: ";
    cin >> numberOfYears;
    
    double finalAmount = principalAmount * pow(1 + annualInterestRate, numberOfYears);
    
    cout << "Final Amount after: " << numberOfYears << " years: $" << finalAmount << endl;
    
    return 0;
    
}

/*
Reflection:
1. What I understood from this program:
The compound interest formula models exponential growth. The pow function raises the growth factor to the number of years.

2. Difficulties I faced:
Understanding how exponentiation works inside the formula.

3. What I needed to search or review:
cmath library and pow syntax.

4. AI Usage (if any):
Only to determine how to use mathematical signs like setting the number to the power (pow).

5. What I learned:
Descriptive variable names improve readability. Floating point values may show small precision differences due to binary representation.
*/