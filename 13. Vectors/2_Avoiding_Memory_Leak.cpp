#include <bits/stdc++.h>
using namespace std;

/*
    To avoid memory leak in C++ we can return the pointer from the function & store it in the main function & then we can delete the memory allocated in heap memory, or, 
    we can use 'Smart Pointers', which automatically deletes the memory allocated in heap memory.
    It is included in <memory> header file, which is a part of C++11.
    Syntax:-
    unique_ptr<int> ptr(new int);  // unique_ptr is a smart pointer which automatically deletes the memory allocated in heap memory.
*/

// Heap memory although is cleared, when the program ends, but it's a good practice to clear the memory allocated in heap memory.
// Cuz in industry level projects, we have to make sure that the memory is cleared, as it can lead to memory leak.

int* func(){
    int *ptr = new int;  // Dynamic Memory Allocation
    *ptr = 10;
    cout << "Value of the pointer is: " << *ptr << endl;

    return ptr;
}

int main()
{
    int *ptr = func();
    delete ptr;  // Free the memory allocated in heap memory.

    return 0;
}