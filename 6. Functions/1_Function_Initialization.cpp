#include <bits/stdc++.h>
using namespace std;

void sayHello(int n)    // Function Definition -> With Parameters!
{
    for (int i = 0; i < n; i++)
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

    sayHello(n);    // Function Calling -> Arguements Passed!

    return 0;
}

/*
    Function: A function is a block of code that performs a specific task.

    Syntax:
        return_type function_name(parameters)
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