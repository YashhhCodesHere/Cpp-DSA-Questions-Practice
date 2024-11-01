#include <bits/stdc++.h>
using namespace std;

/* 
    Type Conversion: Conversion of one data type to another data type.
    1. Implicit Type Conversion: Done by the compiler automatically from lower to higher data types.
    2. Explicit Type Conversion: Done by the user manually.
    3. [ bool -> char -> int -> float -> double ]
*/

int main()
{
    cout << (10 / 4) << endl; // Output: 2 (Integer Division)
    cout << (10.0 / 4) << endl; // Output: 2.5 (Floating Point Division) - Implicit Type Conversion

    cout << ('A' + 1) << endl; // Output: 67 (ASCII Value of 'A' is 65) - Implicit Type Conversion : Char is converted to int
    cout << (int)('A') << endl; // Output: 65 - Explicit Type Conversion : Char is converted to int
    cout << (char)('A' + 1) << endl; // Output: B - Explicit Type Conversion : Int is converted to char
    return 0;
}


/*
    ASCII Values starts from 0 to 127:
    A - 65
    a - 97
*/