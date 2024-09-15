#include <bits/stdc++.h>
using namespace std;
// Bitwise operators usually work on bits and perform bit-by-bit operations!
int main()
{
    // Bitwise Operators:-  &, |, ^, ~, <<, >>  (AND, OR, XOR, NOT, Left Shift, Right Shift)
    int a = 10,b = 8;
    cout<<"Bitwise '&' of a and b are: " << (a&b) << endl;
    cout<<"Bitwise '|' of a and b are: " << (a|b) << endl;
    cout<<"Bitwise '^' (XOR) of a and b are: " << (a^b) << endl << "\n";
    
    cout<<"Bitwise left shift operator: "<<(8<<1)<<endl;    // This will shift the bits of 8 to left by 1 - 8 * 2^1 = 16
    cout<<"Bitwise right shift operator: "<<(8>>2)<<endl;   // This will shift the bits of 8 to right by 2 - 8 / 2^2 = 2

    return 0;
}