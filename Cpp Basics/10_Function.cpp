#include <bits/stdc++.h>
using namespace std;
// Literals are fundamental elements used to represent constant values used in any Languages!

//  Void Function Parameterised:-
void print_name(string name){   // Function Definition
    cout << "Good Morning!\n";
    cout << "      " << name << endl; 
}
//  Return Function:-
int sum(int num1,int num2){     // num1 & num2 are parameters herej
    return (num1+num2);
}

int minimum(int a, int b){
    return min(a,b);
}

int sumToN(int n){
    if(n == 1){
        return 1;
    }
    return n + sumToN(n-1);
}
int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    print_name(name);   // Function Call

    int num1 = 20, num2 = 30;
    int add = sum(num1,num2);   // num1 & num2 are arguements here
    cout<< "\nThe sum is: " << add << endl;

    cout<<"Minimum of the two number is: " << minimum(12,91)<<endl;

    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    cout<< "Sum till 'N' is: "<<sumToN(n);


    return 0;
}