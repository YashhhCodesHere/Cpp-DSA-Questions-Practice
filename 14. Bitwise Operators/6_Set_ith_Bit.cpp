#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position you want to set: ";
    cin >> i;

    int bitMask = (1 << i);

    if(!(n & bitMask)){
        n = n | bitMask;
        cout << "The number after setting the " << i << "th bit is: " << n << endl;
    }else{
        cout << "The " << i << "th bit of " << n << " is already set.\n";
    }

    return 0;
}