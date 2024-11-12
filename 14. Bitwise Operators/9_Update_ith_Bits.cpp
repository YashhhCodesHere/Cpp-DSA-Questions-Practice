#include <bits/stdc++.h>
using namespace std;

/*
    For the Number 7: 0 1 1 1 :-

    For updating 2nd bit to 0, we need to create a mask with 0 at 2nd position and 1 at all other positions.
    1 << i will give us a number with 1 at ith position and 0 at all other positions.

            0 1 0 0
    Now, we will take the complement of this number to get the mask.
    
            1 0 1 1
    
    Now, we will AND this mask with the number to clear the ith bit.
        
            0 1 1 1
        &   1 0 1 1
        -------------
            0 0 1 1

    Now, we will set the ith bit to val.
    For setting the ith bit to val, we need to create a mask with val at ith position and 0 at all other positions.
    val << i will give us a number with val at ith position and 0 at all other positions.

        0 0 0 0
    
    Now, we will OR this number with the number to set the ith bit to val.
        
            0 0 1 1
        |   0 0 0 0
        -------------
            0 0 1 1

*/

int main(){
    int n, i, val;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> i;
    cout << "Enter the value(0 / 1): ";
    cin >> val;

    // This will set the ith bit to 0.
    n = n & ~(1 << i);

    // This will set the ith bit to val.
    n = n | (val << i);

    cout << "The updated number is: " << n << endl;

    return 0;
}