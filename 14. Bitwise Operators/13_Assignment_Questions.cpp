#include <bits/stdc++.h>
using namespace std;

int clearBitsInRange(int n, int i, int j){
    // O(n):-
    while(i <= j){
        n = n & ~(1<<i);
        i++;
    }

    // O(1):-
    int a  = (~0) << j+1;
    int b = (1 << i) - 1;   // For i = 4 -> 1 << 4 = 10000  => (10000 - 1) = 10000 - 00001 = 01111
    int mask = a|b;

    n = n & mask;

    return n;
}

int main(){
    int n, i, j;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the starting position of the bit range to clear: ";
    cin >> i;
    cout << "Enter the ending position of the bit range to clear: ";
    cin >> j;

    cout << "The number after clearing its bits from " << i << " to " << j << "th positions is: " << clearBitsInRange(n, i, j) << "\n";

    return 0;
}