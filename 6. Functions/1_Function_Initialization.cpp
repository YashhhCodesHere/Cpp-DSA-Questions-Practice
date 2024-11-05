#include <bits/stdc++.h>
using namespace std;

// Void Functions can't be used with cout, cin, return, etc.
// cout should be written with return type functions.

void sayHello(int num)    // Function Definition -> With num is it's Parameter!
{
    for (int i = 0; i < num; i++)
    {
        cout << "Hello World" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter How many times you want to print 'Hello World': ";
    cin >> n;
    
    cout << "\n";

    sayHello(n);    // Function Calling -> n is Arguement Passed!

    return 0;
}

/*
    Function: A function is a block of code that performs a specific task.

    Syntax:
        return_type function_name(p_type parameter1, p_type parameter2, ...)
        {
            // code

            return someValue;
        }
*/

/*
    Funtion Initialization:
        1. Function Declaration
        2. Function Definition
        3. Function Calling

    Any function can call itself, it is called Recursion.
*/