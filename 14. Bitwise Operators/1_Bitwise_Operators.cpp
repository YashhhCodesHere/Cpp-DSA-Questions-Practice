#include <bits/stdc++.h>
using namespace std;

/*
    BITWISE OPERATORS:-
    1. & (Bitwise AND)
    2. | (Bitwise OR)
    3. ^ (Bitwise XOR)
    4. ~ (Bitwise NOT)  -> 1's Complement
    5. << (Left Shift)
    6. >> (Right Shift)

    All these operators works on bits and perform bit-by-bit operation, by converting the operands into binary.
*/

int main(){
    int a = 5, b = 9;   // 5 = 0101, 9 = 1001
    cout << (a & b) << endl; // 1
    cout << (a | b) << endl; // 13
    return 0;
}

/*
    Truth Tables:-

    A   B   A&B         A   B   A|B         A   B   A^B         A   ~A
    0   0    0          0   0    0          0   0    0          0   1
    0   1    0          0   1    1          0   1    1          1   0
    1   0    0          1   0    1          1   0    1
    1   1    1          1   1    1          1   1    0

*/