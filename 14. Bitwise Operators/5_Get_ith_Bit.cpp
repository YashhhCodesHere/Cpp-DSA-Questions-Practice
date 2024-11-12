#include <bits/stdc++.h>
using namespace std;

/*
    For the Number 7: 0 1 1 1 :-
    
    For checking 2nd bit, we need to create a mask with 1 at 2nd position and 0 at all other positions.
    1 << i will give us a number with 1 at ith position and 0 at all other positions.

        0 1 0 0
    Now, we will AND this number with the number to check the ith bit.

        0 1 1 1
    &   0 1 0 0
    -------------
        0 1 0 0
*/

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