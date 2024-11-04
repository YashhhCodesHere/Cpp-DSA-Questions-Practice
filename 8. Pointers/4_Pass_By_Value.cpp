#include <bits/stdc++.h>
using namespace std;

/*
    Passing Arguments to a function:-
    1.) Pass by Value: The value of the variable is passed to the function. 
    Changes made to the parameter inside the function doesn't affect the original variable.

    2.) Pass by Reference: The memory address of the variable is passed to the function. 
    Changes made to the parameter inside the function affect the original variable.
*/

void changeValue(int a)
{
    a = 20;
    cout << "Value of 'a' inside the function: " << a << endl; 
}

int main()
{
    int a = 10;
    changeValue(a); // Pass by Value -> Value of a here is copied to the function & actual value of a remains same in the main function.
    cout << "Value of 'a' in the main function: " << a << endl;
    return 0;
}