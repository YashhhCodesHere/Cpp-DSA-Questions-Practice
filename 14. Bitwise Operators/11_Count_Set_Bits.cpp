#include <bits/stdc++.h>
using namespace std;

/*
    For calculating the number of set bits in a number, we need to:-
    1. Perform (AND operation) of number with 1.
    2. If the result is 1, increment the count of set bits.
    3. Repeat the above steps until the number becomes 0.
*/

int main(){
    int n, countSet = 0;
    cout << "Enter a number: ";
    cin >> n;

    while(n > 0){
        countSet += n & 1;
        n >>= 1;
    }

    cout << "The number of set bits are: " << countSet << "\n";
    return 0;
}