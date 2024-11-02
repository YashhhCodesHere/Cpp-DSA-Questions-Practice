#include <bits/stdc++.h>
using namespace std;

int main()
{
    float income, tax;
    cout << "Enter your income (assumed in lakh): ";
    cin >> income;

    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    
    if(income < 500000){
        cout << "0% Tax initiated!\n";
        tax = 0;
    }else if(income >= 500000 && income <= 1000000){
        cout << "20% Tax initiated!\n";
        tax = (0.2 * income);
    }else if(income > 1000000){
        cout << "30% Tax initiated!\n";
        tax = (0.3 * income);
    }
    cout << "Your tax amount is: " << tax << "\n";
    return 0;
}