#include <bits/stdc++.h>
using namespace std;

int decToBin(int dec){
    int n = dec, bin = 0;
    int pow = 1;

    while(n > 0){
        int rem = n % 2;
        bin += rem * pow;
        pow *= 10;
        n /= 2;
    }
    return bin;
}

int main()
{
    int n;
    cout << "Enter the Decimal number: ";
    cin >> n;
    
    cout << "Decimal representation of " << n << " is: " << decToBin(n) << "\n";

    return 0;
}