#include <bits/stdc++.h>
using namespace std;

/*
    Stack Memory: It is a memory that is used to store local variables and function calls.
    Stack Overflow:- (Usually occurs in Infinite Recursion)
    -It is a condition where the stack memory is full, and we are trying to push more elements into it.
    -It is a runtime error that occurs when the program runs out of stack memory.
    Main Reasons for Stack Overflow:
    1.) Very large number of local variables.
    2.) Missing Base Case.
    
    &, Atlast it will lead to 'Segmentation Fault' -> Runtime error says that the program is trying to access the memory that it is not allowed to access.
    &,                        'Core Dumped' -> It is a file that is generated when the program crashes, and it contains the memory snapshot of the program at the time of the crash.
*/

void printNumberDecreasing(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    printNumberDecreasing(n-1);
    // Here, the cout statement is written before the recursive call, so it will print the number in decreasing order, Because stack follows LIFO order.
}

void printNumberIncreasing(int n){
    if(n == 0){
        return;
    }
    printNumberIncreasing(n-1);
    cout << n << " ";
    // Here, the cout statement is written after the recursive call, so it will print the number in increasing order.
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    cout << "Printing " << n << " in Decreasing: ";
    printNumberDecreasing(n);

    cout << "\n";

    cout << "Printing " << n << " in Decreasing: ";
    printNumberIncreasing(n);

    cout << "\n";
    return 0;
}