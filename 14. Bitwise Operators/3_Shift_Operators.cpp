#include <bits/stdc++.h>
using namespace std;

/*
    LEFT & RIGHT SHIFT OPERATOR:-
    Used to shift the bits of a number to the left or right.

VVI Syntax:-    (here, n is the number of bits to shift)
    number << n => (number * 2^n)           -> Left Shift 
    number >> n => (number / 2^n)           -> Right Shift 
*/

int main(){
    int a = 7;  // 5 = 0101
    cout << (a << 2) << "\n";   // 28 = 11100
    cout << (a >> 2) << "\n";   // 1 = 0001
    
    return 0;
}

/*
    Example:- (7 << 2)
    
    7   =    0000 0111
    7 << 2 = 0001 1100      =    28
*/