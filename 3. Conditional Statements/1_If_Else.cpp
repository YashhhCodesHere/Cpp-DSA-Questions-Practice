#include <bits/stdc++.h>
using namespace std;

// Conditional Statements: If-Else
// If the condition is true, then the statements inside the if block will be executed.
// Else, the statements inside the else block will be executed.

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18){
        cout << "You are eligible to vote.\n";
    }else{
        cout << "You are not eligible to vote.\n";
    }
    if(age>=45){
        cout << "You can contest elections.\n";
    }
    return 0;
}