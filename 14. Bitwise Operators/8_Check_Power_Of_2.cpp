#include <bits/stdc++.h>
using namespace std;

// If a number is a power of 2, then it will have only 1 bit set.
// So, if we subtract 1 from the number, then all the bits will be set except the bit which was set in the original number.
// So, if we perform AND operation of n and n-1, then it should be 0.

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(!(n & (n-1))){
        cout << n << " is a power of 2.\n";
    }else{
        cout << n << " is not a power of 2.\n";
    }

    return 0;
}