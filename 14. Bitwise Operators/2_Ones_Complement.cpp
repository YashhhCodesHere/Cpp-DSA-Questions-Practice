#include <bits/stdc++.h>
using namespace std;

/*
    ONES COMPLEMENT:-
    Used to invert the bits of a number -> using NOT Operator (~)
    Steps:-
    1. Convert the number into binary.
    2. Replace 0's with 1's and 1's with 0's. (Leaving the Most Significant Bit as it is)
    3. The result is the 1's Complement of the number.

    For checking Magnitude of a number:- (We've to use 2's Complement method)
    1. Convert the decimal number into binary.
    2. Find the 1's Complement of the number.
    3. Check the Most Significant Bit (MSB) of the 1's Complement.
        -> If MSB is 0, then the number is positive.
        -> If MSB is 1, then the number is negative.
    4. The magnitude is the 2's Complement of the number:-
        -> Leave the MSB as it is.
        -> Take complement of the remaining bits.
        -> Add 1 to the result.
    5. Convert the binary number into decimal.
*/

int main(){
    cout << (~5) << endl;   // -6
    cout << (~(-6)) << endl;  // 5

    return 0;
}