#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position you want to check: ";
    cin >> i;

    int bitMask = (1 << i);
    if(n & bitMask){
        cout << "The " << i << "th bit of " << n << " is 1 (Set).\n";
    }else{
        cout << "The " << i << "th bit of " << n << " is 0 (Not Set).\n";
    }

    return 0;
}