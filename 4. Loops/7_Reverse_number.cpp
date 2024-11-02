#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rev=0;
    cout << "Enter the number: ";
    cin >> num;
    int org = num;

    while(num > 0){
        int lastDigit = num%10;
        rev = (rev*10) + lastDigit;
        num /= 10;
    }

    cout << "Reverse of the number " << org << " is: " << rev << "\n";

    return 0;
}