#include <bits/stdc++.h>
using namespace std;

/*
    Recursion is a block of code / function that repeatedly calls itself until the 'Base Case' is reached.
    In Recursion, Problems are solved by breaking them into smaller sub-problems, & their base case is the smallest sub-problem.
    If Base Case is NOT Defined in the problem, then it will lead to 'Infinite Recursion'.
    We can do all the thing with recursion that we can do with loops.
    In some cases, recursion is more efficient than loops, like, in the case of tree traversal. 
*/

// Recursion is the method of solving computational problems where the solution depends on solutions to smaller instances of the same problem.
// Recursion works on the concept of 'Divide & Conquer' using Stack Memory.

int factorial(int n){
    if(n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int fact = factorial(n);
    cout << "The factorial of " << n << " is: " << fact << "\n";

    return 0;
}

/*
    For performing Recursion, we need to follow the following steps:
    1. Identify the Base Case(Smallest Sub-Problem).
    2. Identify the Recursive Case(What to do with the problem).
    3. Get closer to the Base Case(How to call the inner function or function with the smaller input).
*/