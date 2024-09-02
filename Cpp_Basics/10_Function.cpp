#include <bits/stdc++.h>
using namespace std;
//  Void Function Parameterised:-
void print_name(string name){
    cout << "Good Morning!\n";
    cout << "      " << name << endl; 
}
//  Return Function:-
int sum(int num1,int num2){
    return (num1+num2);
}
int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    print_name(name);

    int num1 = 20, num2 = 30;
    cout<< "\nThe sum is: " << sum(num1,num2) << endl;
    return 0;
}