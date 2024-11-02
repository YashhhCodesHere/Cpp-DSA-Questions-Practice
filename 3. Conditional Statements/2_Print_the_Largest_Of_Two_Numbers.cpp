#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter your two numbers: ";
    cin >> num1 >> num2;

    if(num1 > num2){
        cout << num1 << " is greater than " << num2 << "\n";
    }else if(num1 < num2){
        cout << num2 << " is greater than " << num1 << "\n";
    }else if(num1 == num2){
        cout << "Both of the entered numbers are equal!\n";
    }
    return 0;
}