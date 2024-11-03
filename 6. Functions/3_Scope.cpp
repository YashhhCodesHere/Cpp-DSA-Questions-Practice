#include <bits/stdc++.h>
using namespace std;

/*
    Scope: It is the region of the program where a variable is accessible.
    - Local Scope: Variables declared inside a function are local to that function.
    - Global Scope: Variables declared outside all functions are global and can be accessed by any function.
    - Block Scope: Variables declared inside a block are local to that block.
    - Function Scope: Variables declared inside a function are local to that function.
    - Class Scope: Variables declared inside a class are local to that class.

*/

int x = 10; // Global variable

int main()
{
    int x = 20; // Local variable
    cout << x << endl; // 20

//  Local Scope has higher precedence than Global Scope

    cout << ::x << endl; // 10 (:: is scope resolution operator)
    return 0;
}

/*
    Function Call in Memory:-
    - When a function is called, a new memory block is created for that function which is in the form of a stack.
    - This memory block is called Stack Frame (Activation Record).
    - It contains all the local variables, parameters, return address, etc.
    - When the function is called, the stack frame is pushed onto the stack and when the function returns, the stack frame is popped off the stack.
    - The stack grows downwards and the heap grows upwards.
    - The stack is a LIFO data structure.
    - The stack is used for function calls, recursion, etc.
    - The heap is used for dynamic memory allocation.
    - The stack is faster than the heap.
    - The stack is limited in size whereas the heap is limited by the size of the virtual memory.

*/