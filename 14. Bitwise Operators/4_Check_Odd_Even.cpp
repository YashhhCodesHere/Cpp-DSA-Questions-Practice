#include <bits/stdc++.h>
using namespace std;

/*
    In any binary number:-
    Leftmost Bit -> Most Significant Bit (MSB) => Determines the Sign of the number(positive/negative)
    Rightmost Bit -> Least Significant Bit (LSB) => Determines the number is Even/Odd.
*/

// We use the concept of AND Operator to check whether a number is Odd or Even -> (Bitmasking)
// Bitmask are used to access the specific bit of a number.

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // If we perform AND operation with 1, 

    if(n & 1){
        cout << n << " is an Odd number.\n";
    }else{
        cout << n << " is an Even number.\n";
    }

    return 0;
}

/*
    While BitMasking, Always remember:-
    Use:
        To remove any set: n & ~(1 << i)
        To set any bit: n | (1 << i)
*/