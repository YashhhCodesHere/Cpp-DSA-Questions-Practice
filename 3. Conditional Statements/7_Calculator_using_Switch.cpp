#include <bits/stdc++.h>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter you both number: ";
    cin >> num1 >> num2;

    char oper;
    cout << "Enter the operation you want (+,-,*,/): ";
    cin >> oper;

    switch(oper){
        case '+': cout << "Sum of " << num1 << " and " << num2 << " is: " << (num1+num2) << "\n";
        break;
        case '-': cout << "Difference of " << num1 << " and " << num2 << " is: " << (num1-num2) << "\n";
        break;
        case '*': cout << "Product of " << num1 << " and " << num2 << " is: " << (num1*num2) << "\n";
        break;
        case '/': cout << "Quotient of " << num1 << " and " << num2 << " is: " << (num1/num2) << "\n";
        break;
        default: cout << "Enter valid operator!\n";
    }

    return 0;
}