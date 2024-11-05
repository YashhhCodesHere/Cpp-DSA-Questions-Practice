#include <bits/stdc++.h>
using namespace std;

/*
    Pointer Arithmetic:- [It is done based on the data type of pointer]
    1. Increment or Decrement of pointer:  If pointer is of 'int' type then increment or decrement will be of 4 bytes.
    2. Addition or Subtraction of constants to pointer(Used in Arrays to access element of different index): If 3 is added to pointer then it will move 3*4 = 12 bytes ahead.
    3. Addition or Subtraction of two pointers: Addition is not allowed in C++. However, Subtraction is allowed and it will give the number of elements between two pointers.
    4. Pointer Comparision: Pointers can be compared using relational operators. If two pointers are pointing to the same array then they can be compared.
*/

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Value of ptr: " << ptr << "\n\n";
    
//  Increment or Decrement of pointer:-
    ptr++;
    cout << "After INCREMENT:- \n";

    cout << "Value of ptr: " << ptr << "\ni.e., It move to next memory location which will be 4 bytes ahead." << endl;

//  Addition or Subtraction of constants to pointer:-
    ptr += 3;
    cout << "\nAfter ADDITION of 3:- \n";

    cout << "Value of ptr: " << ptr << "\ni.e., It move to next memory location which will be 3*4 = 12 bytes ahead." << endl;

//  Addition or Subtraction of two pointers:-
    int b = 20;
    int *ptr2 = &b;
    int *ptr3 = ptr2 + 3;

    cout << "\n After Substraction of two pointers:- \n";
//  ptr += ptr2; // Error: Addition of two pointers is not allowed in C++.
    cout << ptr3 - ptr2 << " elements are between ptr2 and ptr3." << endl;
    return 0;
}