#include <bits/stdc++.h>
using namespace std;

/*
    Pass By Reference can be done by:-
    1.) Using Pointers.
    2.) Using References Variables.
*/

void changeValue(int *a) // Pointer 'a' is the parameter
{
    *a = 20;
    cout << "Value of 'a' inside the function: " << *a << endl; 
}

void changeValue(int &a) // Reference 'a' is the parameter
{
    a = 20;
    cout << "Value of 'a' inside the function: " << a << endl; 
}

int main()
{
    int a = 10;
    int *ptr = &a; 
//  int &b; // Error: Reference Variable must be initialized.

    changeValue(&a); // Pass by Reference -> Memory address of a is passed to the function & changes made to the parameter inside the function affect the original variable.
    changeValue(ptr); 
    cout << "Value of 'a' in the main function: " << a << " i.e., it's changed!\nNow value of 'a' is 20 in the main as well as in the function." << endl;
    return 0;
}

// Whenever we create a reference variable, it should always be initialized at the time of declaration.