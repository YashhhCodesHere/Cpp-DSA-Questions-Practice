#include <bits/stdc++.h>
using namespace std;

/*
    Pointers are variables that store the memory address of another variable. It's Not present in Java or Python.
    Pointers are made by adding '*' before the variable name. It's called 'Dereferencing Operator'.

    All the variables are stored in memory and each variable has a unique 'memory address' -> which starts from '0x' followed by some hexadecimal number.
    Hexadecimal number is used because it's easier to represent large numbers in a shorter format -> Base 16 i.e. 0-9 and A-F.
*/

// Pointers take 8 bytes of memory in 64-bit OS and 4 bytes in 32-bit OS.

int main()
{
    // 'ADDRESS OF' Operator: & -> It returns the memory address of the variable.
    int a = 10;
    cout << "Address of a using &a: " << &a << endl; // Output: [Address of a using &a: 0x7ffebc1f3bfc]

    // 'VALUE AT / DEREFERENCE' Operator: * -> It returns the value stored at the memory address.

//  int *ptr = 10; // Error: Pointer can't be assigned a value directly.
    int *ptr = &a; // Pointer 'ptr' is storing the memory address of variable 'a'.
    cout << "Value of a using *ptr: " << *ptr << endl; // Output: [Value of a using *ptr: 10]

    cout << "The value of &a and ptr: " << &a << " = " << ptr  << " i.e., they both are same!" << endl; // Output: [The value of &a and ptr: 0x7ffebc1f3bfc 0x7ffebc1f3bfc]

    float b = 20.5;
    float *ptr1 = &b;
    cout << "Value of b using *ptr1: " << *ptr1 << endl; // Output: [Value of b using *ptr1: 20.5]
    
    return 0;
}

/*
    Pointer Declaration:
    int *p; -> It means p is a pointer to an integer.
    syntax: [datatype] *var_name;
    Dataytype of pointer must be same as the datatype of the variable it's pointing to, 
    as the pointer stores the memory address of the variable and the memory address is of a specific datatype.
*/