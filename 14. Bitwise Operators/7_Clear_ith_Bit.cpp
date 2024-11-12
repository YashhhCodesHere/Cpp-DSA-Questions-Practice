#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position you want to clear: ";
    cin >> i;

    int bitMask = ~(1 << i);
    n = n & bitMask;

    cout << "The number after clearing the " << i << "th bit is: " << n << endl;
    return 0;
}