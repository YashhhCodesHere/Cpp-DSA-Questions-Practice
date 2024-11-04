#include <bits/stdc++.h>
using namespace std;

/*
    NULL is a macro defined in C++ as '0' and it's used to represent a null pointer.
    Whenever we want to make a pointer point to nothing, we can assign it to NULL, otherwise, it will point to some garbage value.
    Dereferecing a NULL pointer will result in a 'Segmentation fault'.
*/

int main()
{
    int *ptr = NULL;
    cout << "Value of ptr: " << ptr << endl; // Output: [Value of ptr: 0]
    cout << "Value of *ptr: " << *ptr << endl; // Output: [Segmentation fault (core dumped)]
    return 0;
}