#include <bits/stdc++.h>
using namespace std;

/*
    For the Number 7: 0 1 1 1 :-
    
    For setting 2nd bit, we need to create a mask with 1 at 2nd position and 0 at all other positions.
    1 << i will give us a number with 1 at ith position and 0 at all other positions.

        0 1 0 0
    Now, we will OR this number with the number to set the ith bit.

        0 1 1 1
    |   0 1 0 0
    -------------
        0 1 1 1
*/

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position you want to set: ";
    cin >> i;

    int bitMask = (1 << i);

    if(!(n & bitMask)){
        n = n | bitMask;
        cout << "The number after setting the " << i << "th bit is: " << n << endl;
    }else{
        cout << "The " << i << "th bit of " << n << " is already set.\n";
    }

    return 0;
}