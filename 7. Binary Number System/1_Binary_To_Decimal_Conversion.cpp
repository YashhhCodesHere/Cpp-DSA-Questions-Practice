#include <bits/stdc++.h>
using namespace std;

int binToDec(int bin){
    int n = bin, dec = 0;
    int pow = 1;
    while(n > 0){
        int lastDigit = n % 10;
        dec += lastDigit * pow;
        pow *= 2;
        n /= 10;
    }
    return dec;
}

int main()
{
    int n;
    cout << "Enter the Binary number: ";
    cin >> n;
    
    cout << "Decimal representation of " << n << " is: " << binToDec(n) << "\n";

    return 0;
}