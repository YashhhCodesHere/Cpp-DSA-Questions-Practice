#include <bits/stdc++.h>
using namespace std;

/*
    For the Number 7: 0 1 1 1 :-
    
    For clearing 2nd bit, we need to create a mask with 0 at 2nd position and 1 at all other positions.
    1 << i will give us a number with 1 at ith position and 0 at all other positions.

        0 1 0 0
    Now, we will take the complement of this number to get the mask.

        1 0 1 1

    Now, we will AND this mask with the number to clear the ith bit.

        0 1 1 1
    &   1 0 1 1
    -------------
        0 0 1 1

*/

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position you want to clear: ";
    cin >> i;

    // This will clear the ith bit.
    int bitMask = ~(1 << i);
    n = n & bitMask;

    cout << "The number after clearing the " << i << "th bit is: " << n << endl;
    return 0;
}