#include <bits/stdc++.h>
using namespace std;

/*
    To clear the last i bits of a number, we need to:-
    1. Create a mask with ~0 at i positions -> as it has all bits as 1.
    2. We will left shift this number by i positions to get the mask.
    3. Now, we will AND this mask with the number to clear the last i bits.
*/

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the number of bits you want to clear: ";
    cin >> i;

    int bitMask = (~0) << i;    // (~0) = -1 => Gives all bits as 1.

    n = n & bitMask;
    cout << "The number after clearing the last " << i << " bits is: " << n << endl;
    return 0;
}