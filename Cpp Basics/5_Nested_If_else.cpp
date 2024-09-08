#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 18){
        cout << "You're NOT eligible for work!\n";
    }
    else if(age>=18){
        cout << "You're eligible for work!\n";
        if(age>=55 && age <57){
            cout << "But Your retirement is soon!\n";
        }
    }
        if(age > 57){
            cout << "Retirement time!\n";
        }
}