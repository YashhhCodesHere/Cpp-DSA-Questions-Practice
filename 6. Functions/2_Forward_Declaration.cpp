#include <bits/stdc++.h>
using namespace std;
/*
    Forward Declaration: The declaration of a function before its definition including the return type, function name, and parameters if any.
    Function Definition: The actual implementation & body of the function.

    Forward Declaration is mostly used when we want to define a function after the main function.
*/

void sayHello();    // Forward Declaration

int main()
{
    sayHello();
    return 0;
}

void sayHello()
{
    cout << "Hello :)" << endl;
}

//   Default Parameters can't be set to first parameter and skip the next parameters.
