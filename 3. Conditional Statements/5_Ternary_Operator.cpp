#include <bits/stdc++.h>
using namespace std;

/*
    Ternaary Operator:- (Conditional Operator)
    - It is a conditional operator that returns a value based on the condition.
    - It is a shorthand for if-else statement.
    - Syntax: (condition) ? value_if_true : value_if_false
    - It is used to assign a value to a variable based on some condition.
*/

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool isAdult = (age >= 18) ? true : false;

    cout << "Are you an adult? -> " << (isAdult ? "Yes" : "No") << "\n";
    return 0;
}