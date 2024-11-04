#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a; // Pointer 'p' is storing the memory address of variable 'a'.
    int **q = &p; // Pointer 'q' is storing the memory address of pointer 'p'.

    cout << "Address of p must be same as the value of q: " << &p << " = " << q << endl; 
    return 0;
}